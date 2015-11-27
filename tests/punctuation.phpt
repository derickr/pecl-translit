--TEST--
Test for punctuation ligature filter
--FILE--
<?php
$filters = array(
	'normalize_punctuation', 'remove_punctuation'
);
$string = iconv("utf-8", "ucs-2", file_get_contents(__DIR__.'/punctuation.txt'));
foreach ($filters as $filter) {
	echo "=================================\n";
	echo "Running filter '$filter':\n\n";
	$res = transliterate($string, array($filter));
	echo iconv('ucs-2', 'utf-8', $res);
}
?>
--EXPECT--
=================================
Running filter 'normalize_punctuation':

[ ][]

       ‎‏---------
''''""" '""'""
!!?!???!!? !?
=================================
Running filter 'remove_punctuation':

 ­

           ​‌‍‎‏‐‑‒–—―
‘’‚‛“„‟ ′″‴‵‶‷
‼‽⁇⁈⁉ ¡¿
