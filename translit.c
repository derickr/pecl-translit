/*
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2020 Derick Rethans                               |
   +----------------------------------------------------------------------+
   | This source file is subject to the 2-Clause BSD license which is     |
   | available through the LICENSE file, or online at                     |
   | http://opensource.org/licenses/bsd-license.php                       |
   +----------------------------------------------------------------------+
   | Authors: Derick Rethans <derick@derickrethans.nl>                    |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "ext/iconv/php_iconv.h"
#include "php_translit.h"

/* PHP < 8 */
#ifndef RETURN_THROWS
#define RETURN_THROWS() return
#endif

#if PHP_VERSION_ID < 70200
#undef  ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX
#define ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(name, return_reference, required_num_args, type, allow_null) \
		ZEND_BEGIN_ARG_INFO_EX(name, 0, return_reference, required_num_args)
#endif

#ifndef ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE
#define ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(pass_by_ref, name, type_hint, allow_null, default_value) \
		ZEND_ARG_TYPE_INFO(pass_by_ref, name, type_hint, allow_null)
#endif

#include "translit_arginfo.h"

static const zend_module_dep translit_deps[] = {
     ZEND_MOD_REQUIRED("iconv")
     ZEND_MOD_END
};

/* {{{ translit_module_entry */
zend_module_entry translit_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	translit_deps,
	"translit",
	ext_functions,
	PHP_MINIT(translit),
	NULL,
	NULL,
	NULL,
	PHP_MINFO(translit),
	PHP_TRANSLIT_VERSION,
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_TRANSLIT
ZEND_GET_MODULE(translit)
#endif


translit_filter_entry  translit_filters[] = {
#include "data/filter_table.h"
	{ NULL, NULL }
};
	
PHP_MINIT_FUNCTION(translit)
{
	return SUCCESS;
}
	
/* {{{ PHP_MINFO_FUNCTION
 */
PHP_MINFO_FUNCTION(translit)
{
	php_info_print_table_start();
	php_info_print_table_header(2, "Transliteration support", "enabled");
	php_info_print_table_row(2, "Version", PHP_TRANSLIT_VERSION);
	php_info_print_table_end();
}
/* }}} */

static translit_func_t translit_find_filter(char* filter_name)
{
	translit_filter_entry *entry = translit_filters;

	while (entry->name != NULL) {
		if (strcmp(entry->name, filter_name) == 0) {
			return entry->function;
		}
		entry++;
	}
	return NULL;
}

/* {{{ proto array transliterate_filters_get(void)
   Returns an array with all available filters */
PHP_FUNCTION(transliterate_filters_get)
{
	translit_filter_entry *entry = translit_filters;

	if (zend_parse_parameters_none() == FAILURE) {
		RETURN_THROWS();
	}

	array_init(return_value);
	while (entry->name != NULL) {
		add_next_index_string(return_value, entry->name);
		entry++;
	}
}
/* }}} */

/* {{{ proto string transliterate(string string, array filter_list [, string charset_in [, string charset_out]])
   Executes the specified filters on the input string */
PHP_FUNCTION(transliterate)
{
	zval *filter_list;
	HashTable *target_hash;
	HashPosition pos;
	translit_func_t filter;
	size_t string_len_o, string_len_i;
	int free_it = 0, efree_it = 0;
	size_t charset_in_len = 0, charset_out_len = 0;

	char *charset_in_name = NULL, *charset_out_name = NULL;
	zend_string *in, *out, *tmp;
	zend_ulong num_key;
	zend_string *key;
	zval *val;
	zend_string *string;
	size_t inl = 0;
	unsigned int outl = 0;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS(), "Sa|ss", &string, &filter_list, &charset_in_name, &charset_in_len, &charset_out_name, &charset_out_len) == FAILURE) {
		RETURN_THROWS();
	}

	if (!string->len) {
		RETURN_EMPTY_STRING();
	}

	target_hash = HASH_OF(filter_list);
	zend_hash_internal_pointer_reset_ex(target_hash, &pos);

	in = out = string;
	string_len_i = string->len;

	if (charset_in_name && charset_in_len) {
		php_iconv_string(string->val, (size_t) string_len_i, (zend_string **) &in, "ucs-2le", charset_in_name);
		string_len_o = in->len;
		efree_it = 1;
	} else {
		string_len_o = string_len_i;
	}

	inl = outl = string_len_o/2;

	ZEND_HASH_FOREACH_KEY_VAL(target_hash, num_key, key, val) {
		(void)key;
		(void)num_key;

		if (val) {
			if ((filter = translit_find_filter(Z_STRVAL_P(val)))) {
				short unsigned int *tmp_out;

				filter((short unsigned int*) in->val, inl, &tmp_out, &outl);
				out = zend_string_init((char*) tmp_out, outl * 2, 0);
				if (efree_it) {
					zend_string_release(in);
					efree_it = 0;
				}
				if (free_it) {
					zend_string_release(in);
				} else {
					free_it = 1;
				}
				free(tmp_out);

				in = out;
				inl = outl;
			} else {
				php_error_docref(NULL, E_NOTICE, "Filter '%s' does not exist.", Z_STRVAL_P(val));
			}
		}
	} ZEND_HASH_FOREACH_END();

	if (charset_out_name && charset_out_len) {
		char *tmp_charset_name;
		spprintf((char**) &tmp_charset_name, 128, "%s//IGNORE", charset_out_name);
	
		php_iconv_string(out->val, (size_t) (outl * 2), &tmp, tmp_charset_name, "ucs-2le");
		RETVAL_STRINGL((char *)tmp->val, tmp->len);
		zend_string_release(out);

		efree(tmp);
		efree(tmp_charset_name);
	} else {
		RETVAL_STRINGL((char *)out->val, outl * 2);
		zend_string_release(out);
	}
} /* }}} */
/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
