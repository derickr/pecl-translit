<?php
	$filters = array(
		'decompose_special', 'decompose_currency_signs', 'decompose',
	);
	$string = iconv("utf-8", "ucs-2", file_get_contents('tests/special_decompose.utf8'));
	foreach ($filters as $filter) {
		echo "\n===================================================\n";
		echo "Running filter '$filter':\n";
		$res = transliterate($string, array($filter));
		echo iconv('ucs-2', 'utf-8', $res);
	}
?>
