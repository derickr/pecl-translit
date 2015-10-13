--TEST--
Test for filters with numbers
--FILE--
<?php
$filters = array(
	'normalize_superscript_numbers', 'normalize_subscript_numbers',
	'normalize_superscript', 'normalize_subscript', 'normalize_numbers',
);
$string = file_get_contents(__DIR__.'/numbers.txt');
foreach ($filters as $filter) {
	echo "\n===================================================\n";
	echo "Running filter '$filter':\n";
	echo transliterate($string, array($filter), 'utf-8', 'utf-8');
}
?>
--EXPECT--
===================================================
Running filter 'normalize_superscript_numbers':
normalize superscript numbers:
2 3 1 0 4 5 6 7 8 9

normalize subscript numbers:
₀ ₁ ₂ ₃ ₄ ₅ ₆ ₇ ₈ ₉

normalize superscript:
2 3 1 0 4 5 6 7 8 9
⁺ ⁻ ⁼ ⁽ ⁾ ⁿ

normalize subscript:
₀ ₁ ₂ ₃ ₄ ₅ ₆ ₇ ₈ ₉
₊ ₋ ₌ ₍ ₎ ⁱ

normalize numbers:
٠١٢٣٤٥٦٧٨٩ ۰۱۲۳۴۵۶۷۸۹ ०१२३४५६७८९ ০১২৩৪৫৬৭৮৯
੦੧੨੩੪੫੬੭੮੯ ૦૧૨૩૪૫૬૭૮૯ ୦୧୨୩୪୫୬୭୮୯  ௧௨௩௪௫௬௭௮௯
౦౧౨౩౪౫౬౭౮౯ ೦೧೨೩೪೫೬೭೮೯ ൦൧൨൩൪൫൬൭൮൯ ๐๑๒๓๔๕๖๗๘๙
໐໑໒໓໔໕໖໗໘໙ ༠༡༢༣༤༥༦༧༨༩ ၀၁၂၃၄၅၆၇၈၉ ፨፩፪፫፬፭፮፯፰፱
០១២៣៤៥៦៧៨៩ ᠐᠑᠒᠓᠔᠕᠖᠗᠘᠙ ᥆᥇᥈᥉᥊᥋᥌᥍᥎᥏  ㈠㈡㈢㈣㈤㈥㈦㈧㈨
 ㊀㊁㊂㊃㊄㊅㊆㊇㊈ ０１２３４５６７８９

===================================================
Running filter 'normalize_subscript_numbers':
normalize superscript numbers:
² ³ ¹ ⁰ ⁴ ⁵ ⁶ ⁷ ⁸ ⁹

normalize subscript numbers:
0 1 2 3 4 5 6 7 8 9

normalize superscript:
² ³ ¹ ⁰ ⁴ ⁵ ⁶ ⁷ ⁸ ⁹
⁺ ⁻ ⁼ ⁽ ⁾ ⁿ

normalize subscript:
0 1 2 3 4 5 6 7 8 9
₊ ₋ ₌ ₍ ₎ ⁱ

normalize numbers:
٠١٢٣٤٥٦٧٨٩ ۰۱۲۳۴۵۶۷۸۹ ०१२३४५६७८९ ০১২৩৪৫৬৭৮৯
੦੧੨੩੪੫੬੭੮੯ ૦૧૨૩૪૫૬૭૮૯ ୦୧୨୩୪୫୬୭୮୯  ௧௨௩௪௫௬௭௮௯
౦౧౨౩౪౫౬౭౮౯ ೦೧೨೩೪೫೬೭೮೯ ൦൧൨൩൪൫൬൭൮൯ ๐๑๒๓๔๕๖๗๘๙
໐໑໒໓໔໕໖໗໘໙ ༠༡༢༣༤༥༦༧༨༩ ၀၁၂၃၄၅၆၇၈၉ ፨፩፪፫፬፭፮፯፰፱
០១២៣៤៥៦៧៨៩ ᠐᠑᠒᠓᠔᠕᠖᠗᠘᠙ ᥆᥇᥈᥉᥊᥋᥌᥍᥎᥏  ㈠㈡㈢㈣㈤㈥㈦㈧㈨
 ㊀㊁㊂㊃㊄㊅㊆㊇㊈ ０１２３４５６７８９

===================================================
Running filter 'normalize_superscript':
normalize superscript numbers:
2 3 1 0 4 5 6 7 8 9

normalize subscript numbers:
₀ ₁ ₂ ₃ ₄ ₅ ₆ ₇ ₈ ₉

normalize superscript:
2 3 1 0 4 5 6 7 8 9
+ - = ( ) n

normalize subscript:
₀ ₁ ₂ ₃ ₄ ₅ ₆ ₇ ₈ ₉
₊ ₋ ₌ ₍ ₎ i

normalize numbers:
٠١٢٣٤٥٦٧٨٩ ۰۱۲۳۴۵۶۷۸۹ ०१२३४५६७८९ ০১২৩৪৫৬৭৮৯
੦੧੨੩੪੫੬੭੮੯ ૦૧૨૩૪૫૬૭૮૯ ୦୧୨୩୪୫୬୭୮୯  ௧௨௩௪௫௬௭௮௯
౦౧౨౩౪౫౬౭౮౯ ೦೧೨೩೪೫೬೭೮೯ ൦൧൨൩൪൫൬൭൮൯ ๐๑๒๓๔๕๖๗๘๙
໐໑໒໓໔໕໖໗໘໙ ༠༡༢༣༤༥༦༧༨༩ ၀၁၂၃၄၅၆၇၈၉ ፨፩፪፫፬፭፮፯፰፱
០១២៣៤៥៦៧៨៩ ᠐᠑᠒᠓᠔᠕᠖᠗᠘᠙ ᥆᥇᥈᥉᥊᥋᥌᥍᥎᥏  ㈠㈡㈢㈣㈤㈥㈦㈧㈨
 ㊀㊁㊂㊃㊄㊅㊆㊇㊈ ０１２３４５６７８９

===================================================
Running filter 'normalize_subscript':
normalize superscript numbers:
² ³ ¹ ⁰ ⁴ ⁵ ⁶ ⁷ ⁸ ⁹

normalize subscript numbers:
0 1 2 3 4 5 6 7 8 9

normalize superscript:
² ³ ¹ ⁰ ⁴ ⁵ ⁶ ⁷ ⁸ ⁹
⁺ ⁻ ⁼ ⁽ ⁾ ⁿ

normalize subscript:
0 1 2 3 4 5 6 7 8 9
+ - = ( ) ⁱ

normalize numbers:
٠١٢٣٤٥٦٧٨٩ ۰۱۲۳۴۵۶۷۸۹ ०१२३४५६७८९ ০১২৩৪৫৬৭৮৯
੦੧੨੩੪੫੬੭੮੯ ૦૧૨૩૪૫૬૭૮૯ ୦୧୨୩୪୫୬୭୮୯  ௧௨௩௪௫௬௭௮௯
౦౧౨౩౪౫౬౭౮౯ ೦೧೨೩೪೫೬೭೮೯ ൦൧൨൩൪൫൬൭൮൯ ๐๑๒๓๔๕๖๗๘๙
໐໑໒໓໔໕໖໗໘໙ ༠༡༢༣༤༥༦༧༨༩ ၀၁၂၃၄၅၆၇၈၉ ፨፩፪፫፬፭፮፯፰፱
០១២៣៤៥៦៧៨៩ ᠐᠑᠒᠓᠔᠕᠖᠗᠘᠙ ᥆᥇᥈᥉᥊᥋᥌᥍᥎᥏  ㈠㈡㈢㈣㈤㈥㈦㈧㈨
 ㊀㊁㊂㊃㊄㊅㊆㊇㊈ ０１２３４５６７８９

===================================================
Running filter 'normalize_numbers':
normalize superscript numbers:
2 3 1 0 4 5 6 7 8 9

normalize subscript numbers:
0 1 2 3 4 5 6 7 8 9

normalize superscript:
2 3 1 0 4 5 6 7 8 9
⁺ ⁻ ⁼ ⁽ ⁾ ⁿ

normalize subscript:
0 1 2 3 4 5 6 7 8 9
₊ ₋ ₌ ₍ ₎ ⁱ

normalize numbers:
0123456789 0123456789 0123456789 0123456789
0123456789 0123456789 0123456789  123456789
0123456789 0123456789 0123456789 0123456789
0123456789 0123456789 0123456789 0123456789
0123456789 0123456789 0123456789  123456789
 123456789 0123456789
