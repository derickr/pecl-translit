--TEST--
Test for hangul to jamo conversion filter
--FILE--
<?php
$filters = array(
	'hangul_to_jamo', 'jamo_transliterate'
);
$string = iconv("utf-8", "ucs-2", file_get_contents(__DIR__.'/hangul-to-jamo.txt'));
$res = transliterate($string, $filters);
echo iconv('ucs-2', 'utf-8', $res);
?>
--EXPECT--
don Quijote nge ngosinkeosngeur hwanngyeonghapnita!

sonnimngi seupenginkwa ratinngamerikangui keungeoneuhagkyoreur seontaeghangyeo hagseuphateunji sonnimngeun hantanragngui
bokwihan kyeongryeogngeur ngeodke toerkeosngita. ngurineun sonnimngi ngyokunge ttara sonnimngi seupenginngikeona
ratinngamerikajungui hagseupkwajeongngeur nganbaehangyeo jurkeosngita. don Quijotengui ngyungirhan mogpyoneun baro
pumjirngeur bojeunghaneunte ngissta. nguriteurro hangyeokeum jarangseureopke saengkaghaneun keosngeun nguringui saerongun
hagngwonngui 50%ka kijonhagngwonteurngi chucheonhan keosngiraneun keosngita
