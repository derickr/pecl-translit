--TEST--
Test for simple diacritical remove filter
--FILE--
<?php
$filters = array( 'diacritical_remove');

$string = 'abcdéfgh';
foreach ($filters as $filter) {
	echo "\n===================================================\n";
	echo "Running filter '$filter':\n";
	echo transliterate($string, array($filter), 'utf-8', 'utf-8');
}
?>
--EXPECT--
===================================================
Running filter 'diacritical_remove':
abcdefgh
