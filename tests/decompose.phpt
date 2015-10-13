--TEST--
Test for decomposition filters
--FILE--
<?php
$filters = array(
	'decompose_special', 'decompose_currency_signs', 'decompose', 'normalize_numbers', 'normalize_superscript', 'normalize_subscript'
);
$string = iconv("utf-8", "ucs-2", file_get_contents(__DIR__.'/decompose.txt'));

$res = transliterate($string, $filters);
echo iconv('ucs-2', 'utf-8', $res);
?>
--EXPECT--
Decompose currency:
ecu C Cr Fr L m N Pts Rs W NS d eur T

Decompose numbers:
0i⁲⁳456789+-=()n0123456789+-=()
⅓ ⅔ ⅕ ⅖ ⅗ ⅘ ⅙ ⅚ ⅛ ⅜ ⅝ ⅞ ⅟
Ⅰ Ⅱ Ⅲ Ⅳ Ⅴ Ⅵ Ⅶ Ⅷ Ⅸ Ⅹ Ⅺ Ⅻ Ⅼ Ⅽ Ⅾ Ⅿ 
ⅰ ⅱ ⅲ ⅳ ⅴ ⅵ ⅶ ⅷ ⅸ ⅹ ⅺ ⅻ ⅼ ⅽ ⅾ ⅿ

Decompose special:
§(c)<<(r)+->>
