#ifndef __TRANSLIT_FILTERS_H__
#define __TRANSLIT_FILTERS_H__
int cyrillic_transliterate_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int cyrillic_transliterate_bulgarian_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int diacritical_remove_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int greek_transliterate_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int han_transliterate_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int hebrew_transliterate_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int jamo_transliterate_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int lowercase_cyrillic_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int lowercase_greek_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int lowercase_latin_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int normalize_ligature_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int normalize_punctuation_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int remove_punctuation_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int spaces_to_underscore_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int normalize_superscript_numbers_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int normalize_subscript_numbers_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int normalize_numbers_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int normalize_superscript_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int normalize_subscript_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int decompose_special_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int decompose_currency_signs_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int decompose_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int uppercase_cyrillic_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int uppercase_greek_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int uppercase_latin_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int hangul_to_jamo_transliterate_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
int compact_underscores_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
#endif
