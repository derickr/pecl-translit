--TEST--
Test for lowercasing latin filter
--FILE--
<?php
$filters = array(
	'latin_lowercase'
);
$string = iconv("utf-8", "ucs-2", file_get_contents('tests/latin-lowercase.txt'));
$res = transliterate($string, $filters);
echo iconv('ucs-2', 'utf-8', $res);
?>
--EXPECT--
diacritical remove:

latin-1 supplement
àáâãäå çèéêëìíîïðñòóôõö øùúûüý  
àáâãäå çèéêëìíîïðñòóôõö øùúûüý ÿ

latin extended-a
āāăăąąććĉĉċċččďďđđēēĕĕėėęęěěĝĝğğ
ġġģģĥĥħħĩĩīīĭĭįįıı  ĵĵķķĸĺĺļļľľŀ
ŀłłńńņņňňŉŋŋōōŏŏőő  ŕŕŗŗřřśśŝŝşş
ššţţťťŧŧũũūūŭŭůůűűųųŵŵŷŷŸźźżżžžſ

latin extended additional
ḁḁḃḃḅḅḇḇḉḉḋḋḍḍḏḏḑḑḓḓḕḕḗḗḙḙḛḛḝḝḟḟ
ḡḡḣḣḥḥḧḧḩḩḫḫḭḭḯḯḱḱḳḳḵḵḷḷḹḹḻḻḽḽḿḿ
ṁṁṃṃṅṅṇṇṉṉṋṋṍṍṏṏṑṑṓṓṕṕṗṗṙṙṛṛṝṝṟṟ
ṡṡṣṣṥṥṧṧṩṩṫṫṭṭṯṯṱṱṳṳṵṵṷṷṹṹṻṻṽṽṿṿ
ẁẁẃẃẅẅẇẇẉẉẋẋẍẍẏẏẑẑẓẓẕẕẖẗẘẙẚẛ

ạạảảấấầầẩẩẫẫậậắắằằẳẳẵẵặặẹẹẻẻẽẽếế
ềềểểễễệệỉỉịịọọỏỏốốồồổổỗỗộộớớờờởở
ỡỡợợụụủủứứừừửửữữựựỳỳỵỵỷỷỹỹ

------------------------------------------------------------------------------
normalize ligature:

latin-1 supplement
äåæöøüß äåæöøü

latin extended-a
ĳĳœœ

latin extended-b
ǄǅǆǇǈǉǊǋǌ ǣǣǱǲǳǽǽǿǿ
------------------------------------------------------------------------------