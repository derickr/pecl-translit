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

#include <translit.h>


ZEND_DECLARE_MODULE_GLOBALS(translit)

/* True global resources - no need for thread safety here */
static int le_translit;

/* {{{ translit_functions[] */
function_entry translit_functions[] = {
	PHP_FE(transliterate, NULL)
	{NULL, NULL, NULL}
};
/* }}} */

/* {{{ translit_module_entry
 */
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

#ifdef COMPILE_DL_translit
ZEND_GET_MODULE(translit)
#endif

/* {{{ PHP_INI */
PHP_INI_BEGIN()
PHP_INI_END()
/* }}} */

PHP_MINIT_FUNCTION(translit)
{
	le_translit = zend_register_list_destructors_ex(rsrc_close_translit, NULL, "translit", module_number);
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

PHP_FUNCTION(transliterate)
{
	zval *filter_list;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "a", &filter_list) == FAILURE) {
		return;
	}

}
/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
