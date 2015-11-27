--TEST--
Test for hebrew transliterate filter
--FILE--
<?php
$filters = array(
	'hebrew_transliterate',
);
$string = iconv("utf-8", "ucs-2", file_get_contents(__DIR__.'/hebrew-transliterate.txt'));
foreach ($filters as $filter) {
	echo "Running filter '$filter':\n\n";
	$res = transliterate($string, array($filter));
	echo iconv('ucs-2', 'utf-8', $res);
}
?>
--EXPECT--
Running filter 'hebrew_transliterate':

 pzzot mrgmh pg'o bbtym bgos 6
hhrog yrh pzzot mrgmh; lmrot hydos hmrgmot, btgobh

‏bre'sׁiyt bere' 'elohiym 'et hasׁemayim o'et he'erez
