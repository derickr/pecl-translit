dnl If your extension references something external, use with:

PHP_ARG_ENABLE(translit, for transliteration support,
[  --enable-translit        Include transliteration support])

if test "$PHP_TRANSLIT" != "no"; then
  PHP_NEW_EXTENSION(translit, translit.c, $ext_shared)
fi
