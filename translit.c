/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2004 The PHP Group                                |
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
#include "php_translit.h"

ZEND_DECLARE_MODULE_GLOBALS(translit)

/* {{{ translit_functions[] */
function_entry translit_functions[] = {
	PHP_FE(transliterate, NULL)
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
	"0.1", /* Replace with version number for your extension */
#endif
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_TRANSLIT
ZEND_GET_MODULE(translit)
#endif

/* {{{ PHP_INI */
PHP_INI_BEGIN()
PHP_INI_END()
/* }}} */


translit_filter_entry  translit_filters[] = {
#include "data/filter_table.h"
	{ NULL, NULL }
};
	
PHP_MINIT_FUNCTION(translit)
{
}
	
/* {{{ PHP_MINFO_FUNCTION
 */
PHP_MINFO_FUNCTION(translit)
{
	php_info_print_table_start();
	php_info_print_table_header(2, "Transliteration support", "enabled");
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

PHP_FUNCTION(transliterate)
{
	zval *filter_list, **entry;
	HashTable *target_hash;
	HashPosition pos;
	translit_func_t filter;
	long str_len;

	unsigned char *string, *outs;
	unsigned short *in, *out;
	unsigned int inl, outl;


	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "sa", &string, &str_len, &filter_list) == FAILURE) {
		return;
	}
	target_hash = HASH_OF(filter_list);
	zend_hash_internal_pointer_reset_ex(target_hash, &pos);
	in = (unsigned short*) string;
	inl = str_len/2;

	while (zend_hash_get_current_data_ex(target_hash, (void **)&entry, &pos) == SUCCESS) {
		if (Z_TYPE_PP(entry) == IS_STRING) {
			if (filter = translit_find_filter(Z_STRVAL_PP(entry))) {
				filter(in, inl, &out, &outl);
				in = out;
				inl = outl;
			}
		}
		zend_hash_move_forward_ex(target_hash, &pos);
	}
	RETURN_STRINGL((unsigned char *)out, outl*2, 1);
}
/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
