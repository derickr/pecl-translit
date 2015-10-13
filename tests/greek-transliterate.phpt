--TEST--
Test for greek transliterate filter
--FILE--
<?php
$filters = array(
	'greek_transliterate', 'greek_lowercase'
);
$string = iconv("utf-8", "ucs-2", file_get_contents(__DIR__.'/greek-transliterate.txt'));
foreach ($filters as $filter) {
	echo "============================\n";
	echo "Running filter '$filter':\n\n";
	$res = transliterate($string, array($filter));
	echo iconv('ucs-2', 'utf-8', $res);
}
?>
--EXPECT--
============================
Running filter 'greek_transliterate':

O Prothypoyrghos k. Khostas Karamanlhes mhilese shemera sten Thessalonhike ston 8o
dihalogo metaxhu tes Orthhodoxes Ekkleshias kai tes koinovoyleytikhes omhadas toy
Eyropaikohu Laikohu Khommatos kai ton Eyropahion Demokrathon  me thhema «Oikodomhontas
ten Eyrhope me pnehuma syndiallaghes kai synergashias».

      Ha·HeHeHi Ho HuHo
IAVGDEZEThIKLMNXOPR STYPhChPsOIYhahehehi
yavgdezethiklmnxoprsstyphchpsoiyhohuho
bthYYYphipi&  6sFfK90S900              
============================
Running filter 'greek_lowercase':

ο πρωθυπουργός κ. κώστας καραμανλής μίλησε σήμερα στην θεσσαλονίκη στον 8ο
διάλογο μεταξύ της ορθόδοξης εκκλησίας και της κοινοβουλευτικής ομάδας του
ευρωπαϊκού λαϊκού κόμματος και των ευρωπαίων δημοκρατών  με θέμα «οικοδομώντας
την ευρώπη με πνεύμα συνδιαλλαγής και συνεργασίας».

      ά·έήί ό ύώ
ΐαβγδεζηθικλμνξοπρ στυφχψωϊϋάέήί
ΰαβγδεζηθικλμνξοπρςστυφχψωϊϋόύώ
ϐϑϒϓϔϕϖϗ  ϛϛϝϝϟϟϡϡ
