<?php
	$filters = array(
		'normalize_superscript_numbers', 'normalize_subscript_numbers',
		'normalize_superscript', 'normalize_subscript', 'normalize_numbers',
	);
	$string = iconv("utf-8", "ucs-2", file_get_contents('tests/numbers.utf8'));
	foreach ($filters as $filter) {
		echo "\n===================================================\n";
		echo "Running filter '$filter':\n";
		$res = transliterate($string, array($filter));
		echo iconv('ucs-2', 'utf-8', $res);
	}
?>
