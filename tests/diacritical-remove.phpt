--TEST--
Test for diacritical removal filter
--FILE--
<?php
$string = "Vær så god";
echo transliterate($string, array('diacritical_remove'), 'iso-8859-15', 'us-ascii');
?>
--EXPECT--
Vr sa god
