dnl If your extension references something external, use with:

PHP_ARG_ENABLE(translit, for transliteration support,
[  --enable-translit        Include transliteration support])

if test "$PHP_TRANSLIT" != "no"; then
  PHP_NEW_EXTENSION(translit, translit.c data/compact_underscores.c data/cyrillic_transliterate.c data/diacritical_remove.c data/greek_transliterate.c data/han_transliterate.c data/hangul_to_jamo_transliterate.c data/jamo_transliterate.c data/hebrew_transliterate.c data/lowercase_cyrillic.c data/lowercase_greek.c data/lowercase_latin.c data/normalize_ligature.c data/normalize_punctuation.c data/numbers.c data/special_decompose.c data/uppercase_cyrillic.c data/uppercase_greek.c data/uppercase_latin.c, $ext_shared)
  PHP_ADD_BUILD_DIR($ext_builddir/data)

  PHP_ADD_EXTENSION_DEP(translit, iconv)

  PHP_ADD_MAKEFILE_FRAGMENT([$ext_srcdir/Makefile.travis])
fi
