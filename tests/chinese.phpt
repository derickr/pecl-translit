<?php
	$filters = array(
		'han_transliterate', 'hangul_to_jamo'
	);
	$string = iconv("utf-8", "ucs-2", file_get_contents('tests/test.utf8'));
	foreach ($filters as $filter) {
		echo "\n===================================================\n";
		echo "Running filter '$filter':\n";
		$res = transliterate($string, array($filter, 'jamo_transliterate'));
		echo iconv('ucs-2', 'utf-8', $res);
	}
?>
