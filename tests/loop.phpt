<?php
	$string = iconv("utf-8", "ucs-2", file_get_contents('data/test-text.utf8'));
	$res = transliterate($string, array('han_transliterate', 'diacritical_remove', 'normalize_punctuation', 'greek_transliterate'));
	echo iconv('ucs-2', 'utf-8', $res);
?>
