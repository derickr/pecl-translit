--TEST--
Test for special decomposition filters
--FILE--
<?php
	$filters = array(
		'decompose_special', 'decompose_currency_signs', 'decompose',
	);
	$string = iconv("utf-8", "ucs-2", file_get_contents(__DIR__.'/special_decompose.txt'));
	foreach ($filters as $filter) {
		echo "\n===================================================\n";
		echo "Running filter '$filter':\n";
		$res = transliterate($string, array($filter));
		echo iconv('ucs-2', 'utf-8', $res);
	}
?>
--EXPECT--
===================================================
Running filter 'decompose_special':
decompose special:
(c) << (r) +- >>

decompose currency signs:
¢ £ ¥
₠ ₡ ₢ ₣ ₤ ₥ ₦ ₧ ₨ ₩ ₪ ₫ € ₮

decompose:
§ (c) << (r) +- >>
¢ £

===================================================
Running filter 'decompose_currency_signs':
decompose special:
© « ® ± »

decompose currency signs:
c L Y
ecu C Cr Fr L m N Pts Rs W NS d eur T

decompose:
§ © « ® ± »
c L

===================================================
Running filter 'decompose':
decompose special:
(c) << (r) +- >>

decompose currency signs:
c L Y
ecu C Cr Fr L m N Pts Rs W NS d eur T

decompose:
§ (c) << (r) +- >>
c L
