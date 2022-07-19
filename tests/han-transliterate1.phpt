--TEST--
Test for han transliterate filter - 1
--FILE--
<?php
$filters = array(
	'han_transliterate',
);
$string = iconv("utf-8", "ucs-2le", file_get_contents(__DIR__.'/han-transliterate1.txt'));
foreach ($filters as $filter) {
	echo "Running filter '$filter':\n\n";
	$res = transliterate($string, array($filter));
	echo iconv('ucs-2le', 'utf-8', $res);
}
?>
--EXPECT--
Running filter 'han_transliterate':

yú tián chuān shén shè cān dào jī
