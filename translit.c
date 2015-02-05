/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2010 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.0 of the PHP license,       |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_0.txt.                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Derick Rethans <derick@php.net>                              |
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

/* {{{ translit_functions[] */
zend_function_entry translit_functions[] = {
	PHP_FE(transliterate, NULL)
	PHP_FE(transliterate_filters_get, NULL)
	{NULL, NULL, NULL, 0, 0}
};
/* }}} */

/* {{{ translit_module_entry */
zend_module_entry translit_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
	STANDARD_MODULE_HEADER,
#endif
	"translit",
	translit_functions,
	PHP_MINIT(translit),
	NULL,
	NULL,
	NULL,
	PHP_MINFO(translit),
#if ZEND_MODULE_API_NO >= 20010901
	PHP_TRANSLIT_VERSION,
#endif
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

	array_init(return_value);
	while (entry->name != NULL) {
#if PHP_VERSION_ID >= 70000
		add_next_index_string(return_value, entry->name);
#else
		add_next_index_string(return_value, entry->name, 1);
#endif
		entry++;
	}
}
/* }}} */

#if PHP_VERSION_ID >= 70000
# define ZPP_STRLEN_TYPE size_t
#else
# define ZPP_STRLEN_TYPE int
#endif

/* {{{ proto string transliterate(string string, array filter_list [, string charset_in [, string charset_out]])
   Executes the specified filters on the input string */
PHP_FUNCTION(transliterate)
{
	zval *filter_list;
	HashTable *target_hash;
	HashPosition pos;
	translit_func_t filter;
	size_t str_len_o, str_len_i;
	int free_it = 0, efree_it = 0;
	ZPP_STRLEN_TYPE charset_in_len = 0, charset_out_len = 0;

	char *charset_in_name = NULL, *charset_out_name = NULL;
#if PHP_VERSION_ID >= 70000
	zend_string *in, *out, *tmp;
	ulong num_key;
	zend_string *key;
	zval *val;
	zend_string *string;
#else
	size_t tmp_len = 0;
	zval **entry;
	char *string;
	int str_len;
	unsigned short *in = NULL;
	unsigned short *out, *tmp;
#endif
	size_t inl = 0;
	unsigned int outl = 0;
	
#if PHP_VERSION_ID >= 70000
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "Sa|ss", &string, &filter_list, &charset_in_name, &charset_in_len, &charset_out_name, &charset_out_len) == FAILURE) {
#else
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "sa|ss", &string, &str_len, &filter_list, &charset_in_name, &charset_in_len, &charset_out_name, &charset_out_len) == FAILURE) {
#endif
		return;
	}

#if PHP_VERSION_ID >= 70000
	if (!string->len) {
#else
	if (!str_len) {
#endif
		RETURN_EMPTY_STRING();
	}

	target_hash = HASH_OF(filter_list);
	zend_hash_internal_pointer_reset_ex(target_hash, &pos);

#if PHP_VERSION_ID >= 70000
	in = out = string;
	str_len_i = string->len;
#else
	in = out = (unsigned short*) string;
	str_len_i = str_len;
#endif

	if (charset_in_name && charset_in_len) {
#if PHP_VERSION_ID >= 70000
		php_iconv_string(string->val, (size_t) str_len_i, (zend_string **) &in, "ucs-2le", charset_in_name);
		str_len_o = in->len;
#else
		php_iconv_string(string, (size_t) str_len_i, (char **) &in, &str_len_o, "ucs-2le", charset_in_name);
#endif
		efree_it = 1;
	} else {
		str_len_o = str_len_i;
	}

	inl = outl = str_len_o/2;

#if PHP_VERSION_ID >= 70000
	ZEND_HASH_FOREACH_KEY_VAL(target_hash, num_key, key, val) {
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
#else
	while (zend_hash_get_current_data_ex(target_hash, (void **)&entry, &pos) == SUCCESS) {
		if (Z_TYPE_PP(entry) == IS_STRING) {
			if ((filter = translit_find_filter(Z_STRVAL_PP(entry)))) {
				filter(in, inl, &out, &outl);
				if (efree_it) {
					efree(in);
					efree_it = 0;
				}
				if (free_it) {
					free(in);
				} else {
					free_it = 1;
				}
#endif
				in = out;
				inl = outl;
			} else {
#if PHP_VERSION_ID >= 70000
				php_error_docref(NULL TSRMLS_CC, E_NOTICE, "Filter '%s' does not exist.", Z_STRVAL_P(val));
			}
		}
	} ZEND_HASH_FOREACH_END();
#else
				php_error_docref(NULL TSRMLS_CC, E_NOTICE, "Filter '%s' does not exist.", Z_STRVAL_PP(entry));
			}
		}
		zend_hash_move_forward_ex(target_hash, &pos);
	}
#endif

	if (charset_out_name && charset_out_len) {
		char *tmp_charset_name;
		spprintf((char**) &tmp_charset_name, 128, "%s//IGNORE", charset_out_name);
	
#if PHP_VERSION_ID >= 70000
		php_iconv_string(out->val, (size_t) (outl * 2), &tmp, tmp_charset_name, "ucs-2le");
		RETVAL_STRINGL((char *)tmp->val, tmp->len);
		zend_string_release(out);
#else
		php_iconv_string((char *) out, (size_t) (outl * 2), (char **) &tmp, (size_t*) &tmp_len, tmp_charset_name, "ucs-2le");
		RETVAL_STRINGL((unsigned char *)tmp, tmp_len, 1);
		free(out);
#endif
		efree(tmp);
		efree(tmp_charset_name);
	} else {
#if PHP_VERSION_ID >= 70000
		RETVAL_STRINGL((char *)out->val, outl * 2);
		zend_string_release(out);
#else
		RETVAL_STRINGL((unsigned char *)out, outl * 2, 1);
		free(out);
#endif
	}
}
/* }}} */
/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
