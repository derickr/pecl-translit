/*
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2015 Derick Rethans                               |
   +----------------------------------------------------------------------+
   | This source file is subject to the 2-Clause BSD license which is     |
   | available through the LICENSE file, or online at                     |
   | http://opensource.org/licenses/bsd-license.php                       |
   +----------------------------------------------------------------------+
   | Authors: Derick Rethans <derick@derickrethans.nl>                    |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef PHP_TRANSLIT_H
#define PHP_TRANSLIT_H

#include "data/translit_types.h"
#include "data/translit_filters.h"

typedef struct translit_filter_entry {
	char *name;
	translit_func_t function;
} translit_filter_entry;

extern zend_module_entry translit_module_entry;
#define phpext_translit_ptr &translit_module_entry

#define PHP_TRANSLIT_VERSION "0.6.3"

#ifdef PHP_WIN32
#define PHP_TRANSLIT_API __declspec(dllexport)
#else
#define PHP_TRANSLIT_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(translit);
PHP_MSHUTDOWN_FUNCTION(translit);
PHP_RINIT_FUNCTION(translit);
PHP_RSHUTDOWN_FUNCTION(translit);
PHP_MINFO_FUNCTION(translit);

PHP_FUNCTION(transliterate);
PHP_FUNCTION(transliterate_filters_get);

#ifdef ZTS
#define TRANSLIT_G(v) TSRMG(translit_globals_id, zend_translit_globals *, v)
#else
#define TRANSLIT_G(v) (translit_globals.v)
#endif

#endif	/* PHP_TRANSLIT_H */


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
