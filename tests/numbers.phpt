<?php
	$filters = array(
		'normalize_superscript_numbers', 'normalize_subscript_numbers',
		'normalize_superscript', 'normalize_subscript', 'normalize_numbers',
	);
	$string = file_get_contents('tests/numbers.utf8');
	foreach ($filters as $filter) {
		echo "\n===================================================\n";
		echo "Running filter '$filter':\n";
		echo transliterate($string, array($filter), 'utf-8', 'utf-8');
	}
?>
