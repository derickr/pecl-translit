--TEST--
Test for cyrillic transliterate filter
--FILE--
<?php
$filters = array(
	'cyrillic_transliterate', 'cyrillic_transliterate_bulgarian', 'cyrillic_lowercase'
);
$string = iconv("utf-8", "ucs-2", file_get_contents(__DIR__.'/cyrillic-transliterate.txt'));
foreach ($filters as $filter) {
	echo "============================\n";
	echo "Running filter '$filter':\n\n";
	$res = transliterate($string, array($filter));
	echo iconv('ucs-2', 'utf-8', $res);
}
?>
--EXPECT--
============================
Running filter 'cyrillic_transliterate':

IEIODGIEDSIIYIJLJNJTsKJIVDZ
ABVGDEZHZIJKLMNOPRSTUFHCCHSHSCH'Y'EYUYA
abvgdezhzijklmnoprstufhcchshsch'y'eyuya
ieiodjgeziyijljnjckjivdz

Slav'sya, Otechestvo nashe svobodnoe,

	Bratskih narodov soyuz vekovoj,
	Predkami dannaya mudrost' narodnaya!
	Slav'sya, strana! My gordimsya toboj!
============================
Running filter 'cyrillic_transliterate_bulgarian':

IEIODGIEDSIIYIJLJNJTsKJIVDZ
ABVGDEJZIJKLMNOPRSTUFHCCHSHSHT'Y'EIUIA
abvgdejzijklmnoprstufhcchshshtayieiuia
ieiodjgeziyijljnjckjivdz

Slavisia, Otechestvo nashe svobodnoe,

	Bratskih narodov soiuz vekovoj,
	Predkami dannaia mudrosti narodnaia!
	Slavisia, strana! My gordimsia toboj!
============================
Running filter 'cyrillic_lowercase':

ѐёђѓєѕіїјљњћќѝўџ
абвгдежзийклмнопрстуфхцчшщъыьэюя
абвгдежзийклмнопрстуфхцчшщъыьэюя
ѐёђѓєѕіїјљњћќѝўџ

славься, отечество наше свободное,

	братских народов союз вековой,
	предками данная мудрость народная!
	славься, страна! мы гордимся тобой!
