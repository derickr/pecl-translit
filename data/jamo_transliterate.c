/*
 * Warning: Do not edit!
 * This file is generated from a transliteration definition table with the name
 * "jamo_transliterate.tr".
 */
#include "translit_types.h"

static unsigned char jamo_transliterate_jump_map_17[256] = {
	1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 2, 2, 1, 2, 2, 1, 
	1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 1, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 2, 2, 1, 2, 
	2, 2, 2, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 1, 2, 2, 1, 1, 
	2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 
	2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 
	2, 0, 0, 0, 0, 0, 2, 0, 2, 0, 2, 2, 2, 2, 2, 0, 
	2, 2, 0, 2, 2, 2, 0, 2, 2, 2, 2, 0, 2, 0, 2, 2, 
	2, 2, 0, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0
};

static unsigned short jamo_transliterate_replace_map_17[256] = {
	107,   0, 110, 116,   0, 114, 109,  98,   0, 115,   0,   0, 106,   0,   0, 107, 
	116, 112, 104,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,  97,   0,   0,   0,   0, 101,   0,   0, 111,   0,   0,   0,   0, 117,   0, 
	  0,   0,   0,   0,   0, 105,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0, 103,   0,   0, 110,   0,   0, 100, 114, 
	  0,   0,   0,   0,   0,   0,   0, 109, 112,   0, 115,   0,   0, 106,   0, 107, 
	  0, 112, 104,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,  63, 110, 108, 109, 112,   0,   0,   0,   0,   0,   0,   0
};

static us3 jamo_transliterate_expand_map_17[256] = {
	{ 0, 0}, { 2, 107, 107}, { 0, 0}, { 0, 0}, { 2, 116, 116}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 2, 112, 112}, { 0, 0}, { 2, 115, 115}, { 2, 110, 103}, { 0, 0}, { 2, 106, 106}, { 2, 99, 104}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 2, 97, 101}, { 2, 121, 97}, { 3, 121, 97, 101}, { 2, 101, 111}, { 0, 0}, { 3, 121, 101, 111}, 
	{ 2, 121, 101}, { 0, 0}, { 2, 119, 97}, { 3, 119, 97, 101}, { 2, 111, 101}, { 2, 121, 111}, { 0, 0}, { 2, 119, 111}, 
	{ 2, 119, 101}, { 2, 119, 105}, { 2, 121, 117}, { 2, 101, 117}, { 2, 117, 105}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 2, 107, 103}, { 2, 107, 115}, { 0, 0}, { 2, 110, 106}, { 2, 110, 104}, { 0, 0}, { 0, 0}, 
	{ 2, 108, 103}, { 2, 108, 109}, { 2, 108, 98}, { 2, 108, 115}, { 2, 108, 116}, { 2, 108, 112}, { 2, 108, 104}, { 0, 0}, 
	{ 0, 0}, { 2, 112, 115}, { 0, 0}, { 2, 115, 115}, { 2, 110, 103}, { 0, 0}, { 2, 99, 104}, { 0, 0}, 
	{ 2, 116, 104}, { 0, 0}, { 0, 0}, { 3, 110, 103, 110}, { 3, 107, 106, 107}, { 2, 110, 103}, { 2, 110, 100}, { 2, 110, 115}, 
	{ 2, 110, 112}, { 2, 110, 116}, { 2, 116, 103}, { 2, 116, 108}, { 3, 108, 103, 115}, { 2, 108, 108}, { 2, 108, 100}, { 3, 108, 100, 104}, 
	{ 2, 108, 108}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 3, 108, 115, 115}, { 0, 0}, 
	{ 2, 108, 107}, { 0, 0}, { 2, 109, 103}, { 2, 109, 110}, { 2, 109, 98}, { 2, 109, 115}, { 3, 109, 115, 115}, { 0, 0}, 
	{ 3, 109, 99, 104}, { 2, 109, 104}, { 0, 0}, { 2, 109, 110}, { 2, 112, 112}, { 2, 112, 104}, { 0, 0}, { 2, 116, 103}, 
	{ 2, 116, 100}, { 2, 116, 108}, { 2, 116, 98}, { 0, 0}, { 3, 110, 103, 103}, { 0, 0}, { 2, 110, 103}, { 3, 110, 103, 107}, 
	{ 2, 110, 103}, { 3, 110, 103, 115}, { 0, 0}, { 2, 112, 112}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}
};

static unsigned char *jamo_transliterate_jump_table[1] = {
	jamo_transliterate_jump_map_17,
};
static unsigned short *jamo_transliterate_map_table[1] = {
	jamo_transliterate_replace_map_17,
};
static us3 *jamo_transliterate_expand_table[1] = {
	jamo_transliterate_expand_map_17,
};


int jamo_transliterate_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length)
{
	unsigned int i, j, no_jump, jump, out_idx;
	unsigned char block, cp;
	unsigned char *jump_map;
	unsigned short *replace_map, *transpose_map;
	us3 *expand_map;
	unsigned short *tmp_out = NULL;
	unsigned int    str_length;

	/* Init table pointers */
	jump_map = NULL;
	replace_map = NULL;
	transpose_map = NULL;
	expand_map = NULL;
	j = 0;

	/* Determine initial string length */
	str_length = in_length;
	tmp_out = (unsigned short *) malloc((str_length * sizeof(unsigned short)) + 8);
	out_idx = 0;

	/* Loop over input array */
	for (i = 0; i < in_length; i++) {
		if (out_idx > str_length) {
			str_length += 128;
			tmp_out = (unsigned short *) realloc(tmp_out, str_length * sizeof(unsigned short));
		}
		
		block = in[i] / 256;
		cp    = in[i] % 256;

		no_jump = 0;
		switch (block) {
			case 17: jump_map = jamo_transliterate_jump_table[0]; replace_map = jamo_transliterate_map_table[0]; expand_map = jamo_transliterate_expand_table[0]; break;
			default: no_jump = 1;
		}
		if (no_jump) {
			jump = 0;
		} else {
			jump = jump_map[cp];
		}

		switch (jump) {
			case 0: /* No changes */
				tmp_out[out_idx] = in[i];
				out_idx++;
				break;
			case 1: /* Simple mapping */
				tmp_out[out_idx] = replace_map[cp];
				out_idx++;
				break;
			case 2: /* Expand to more than one char */
				for (j = 1; j <= expand_map[cp][0]; j++) {
					tmp_out[out_idx] = expand_map[cp][j];
					out_idx++;
				}
				break;
		}
	}
	*out_length = out_idx;
	*out = tmp_out;
	return 0;
}
