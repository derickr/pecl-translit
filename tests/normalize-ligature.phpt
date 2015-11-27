--TEST--
Test for normalizing ligature filter
--FILE--
<?php
$filters = array(
	'normalize_ligature',
);
$string = iconv("utf-8", "ucs-2", file_get_contents(__DIR__.'/normalize-ligature.txt'));
foreach ($filters as $filter) {
	echo "Running filter '$filter':\n\n";
	$res = transliterate($string, array($filter));
	echo iconv('ucs-2', 'utf-8', $res);
}
?>
--EXPECT--
Running filter 'normalize_ligature':

Latin-1 Supplement
AEAAAEOEOEUEss aeaaaeoeoeue

Latin Extended-A
IJijOEOE

Latin Extended-B
DZDzdzLJLjljNJNjnj AEaeDZDzdzAEaeOEoe
