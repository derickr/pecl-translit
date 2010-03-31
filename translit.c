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
	{NULL, NULL, NULL}
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
		add_next_index_string(return_value, entry->name, 1);
		entry++;
	}
}
/* }}} */

/* {{{ proto string transliterate(string string, array filter_list [, string charset_in [, string charset_out]])
   Executes the specified filters on the input string */
PHP_FUNCTION(transliterate)
{
	zval *filter_list, **entry;
	HashTable *target_hash;
	HashPosition pos;
	translit_func_t filter;
	int charset_in_len = 0, charset_out_len = 0;
	size_t tmp_len = 0;
	int str_len;
	size_t str_len_o, str_len_i;
	int free_it = 0, efree_it = 0;

	char *string, *charset_in_name = NULL, *charset_out_name = NULL;
	unsigned short *in = NULL, *out, *tmp;
	size_t inl = 0;
	unsigned int outl = 0;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "sa|ss", &string, &str_len, &filter_list, &charset_in_name, &charset_in_len, &charset_out_name, &charset_out_len) == FAILURE) {
		return;
	}
	target_hash = HASH_OF(filter_list);
	zend_hash_internal_pointer_reset_ex(target_hash, &pos);
	in = out = (unsigned short*) string;

	str_len_i = str_len;
	if (charset_in_name && charset_in_len) {
		php_iconv_string(string, (size_t) str_len_i, (char **) &in, &str_len_o, "ucs-2", charset_in_name);
		efree_it = 1;
	} else {
		str_len_o = str_len_i;
	}

	inl = outl = str_len_o/2;

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
				in = out;
				inl = outl;
			} else {
				php_error_docref(NULL TSRMLS_CC, E_NOTICE, "Filter '%s' does not exist.", Z_STRVAL_PP(entry));
			}
		}
		zend_hash_move_forward_ex(target_hash, &pos);
	}

	if (charset_out_name && charset_out_len) {
		char *tmp_charset_name;
		spprintf((char**) &tmp_charset_name, 128, "%s//IGNORE", charset_out_name);
	
		php_iconv_string((char *) out, (size_t) (outl * 2), (char **) &tmp, (size_t*) &tmp_len, tmp_charset_name, "ucs-2");
		RETVAL_STRINGL((unsigned char *)tmp, tmp_len, 1);
		free(out);
		efree(tmp);
		efree(tmp_charset_name);
	} else {
		RETVAL_STRINGL((unsigned char *)out, outl * 2, 1);
		free(out);
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
