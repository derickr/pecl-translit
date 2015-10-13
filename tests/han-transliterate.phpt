--TEST--
Test for han transliterate filter
--FILE--
<?php
$filters = array(
	'han_transliterate',
);
$string = iconv("utf-8", "ucs-2", file_get_contents(__DIR__.'/han-transliterate.txt'));
foreach ($filters as $filter) {
	echo "Running filter '$filter':\n\n";
	$res = transliterate($string, array($filter));
	echo iconv('ucs-2', 'utf-8', $res);
}
?>
--EXPECT--
Running filter 'han_transliterate':

	dà píng kuàng nán sǐ zhě zēng zhì 66rén  zhèng méi suǒ shǔ méi kuàng quán tíng chǎn 

	 エンタープライズjiǎn suǒ プラットフォーム
