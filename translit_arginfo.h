/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: d23320ae459b5898dab2c55b54786cc0e9adde59 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_transliterate, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, filter_list, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, charset_in, IS_STRING, 0, "\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, charset_out, IS_STRING, 0, "\"\"")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_transliterate_filters_get, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()


ZEND_FUNCTION(transliterate);
ZEND_FUNCTION(transliterate_filters_get);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(transliterate, arginfo_transliterate)
	ZEND_FE(transliterate_filters_get, arginfo_transliterate_filters_get)
	ZEND_FE_END
};
