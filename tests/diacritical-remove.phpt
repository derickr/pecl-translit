--TEST--
Test for diacritical removal filter
--FILE--
<?php
$string = "V�r s� god";
echo transliterate($string, array('diacritical_remove'), 'iso-8859-15', 'us-ascii');
?>
--EXPECT--
Vr sa god
