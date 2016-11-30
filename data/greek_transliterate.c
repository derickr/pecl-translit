/*
 * Warning: Do not edit!
 * This file is generated from a transliteration definition table with the name
 * "greek_transliterate.tr".
 */
#include "translit_types.h"

static unsigned char greek_transliterate_jump_map_3[256] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 
	0, 0, 0, 0, 1, 1, 2, 1, 2, 2, 2, 0, 2, 0, 2, 2, 
	1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 
	1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 0, 
	1, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 
	1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
	3, 1, 3, 1, 3, 1, 1, 3, 3, 3, 3, 3, 0, 0, 0, 0
};

static unsigned short greek_transliterate_replace_map_3[256] = {
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,  39,  39,   0,   0,   0,   0,   0,   0,   0,   0,  59,   0, 
	  0,   0,   0,   0,  39,  59,   0, 183,   0,   0,   0,   0,   0,   0,   0,   0, 
	 73,  65,  86,  71,  68,  69,  90,  69,   0,  73,  75,  76,  77,  78,  88,  79, 
	 80,  82,   0,  83,  84,  89,   0,   0,   0,  79,  73,  89,   0,   0,   0,   0, 
	121,  97, 118, 103, 100, 101, 122, 101,   0, 105, 107, 108, 109, 110, 120, 111, 
	112, 114, 115, 115, 116, 121,   0,   0,   0, 111, 105, 121,   0,   0,   0,   0, 
	 98,   0,  89,  89,  89,   0,   0,  38,  75, 107,  54, 115,  70, 102,  75,   0, 
	 83,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0, 114,   0, 106,   0, 101, 101,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static us3 greek_transliterate_expand_map_3[256] = {
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
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 72, 97}, { 0, 0}, 
	{ 2, 72, 101}, { 2, 72, 101}, { 2, 72, 105}, { 0, 0}, { 2, 72, 111}, { 0, 0}, { 2, 72, 117}, { 2, 72, 111}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 2, 84, 104}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 80, 104}, { 2, 67, 104}, 
	{ 2, 80, 115}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 104, 97}, { 2, 104, 101}, { 2, 104, 101}, { 2, 104, 105}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 2, 116, 104}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 112, 104}, { 2, 99, 104}, 
	{ 2, 112, 115}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 104, 111}, { 2, 104, 117}, { 2, 104, 111}, { 0, 0}, 
	{ 0, 0}, { 2, 116, 104}, { 0, 0}, { 0, 0}, { 0, 0}, { 3, 112, 104, 105}, { 2, 112, 105}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 57, 48}, 
	{ 0, 0}, { 3, 57, 48, 48}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}
};

static unsigned char *greek_transliterate_jump_table[1] = {
	greek_transliterate_jump_map_3,
};
static unsigned short *greek_transliterate_map_table[1] = {
	greek_transliterate_replace_map_3,
};
static us3 *greek_transliterate_expand_table[1] = {
	greek_transliterate_expand_map_3,
};


int greek_transliterate_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length)
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
		if (out_idx >= str_length) {
			str_length += 128;
			tmp_out = (unsigned short *) realloc(tmp_out, str_length * sizeof(unsigned short));
		}
		
		block = in[i] / 256;
		cp    = in[i] % 256;

		no_jump = 0;
		switch (block) {
			case 3: jump_map = greek_transliterate_jump_table[0]; replace_map = greek_transliterate_map_table[0]; expand_map = greek_transliterate_expand_table[0]; break;
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
			case 3: /* Skip */
				break;
		}
	}
	*out_length = out_idx;
	*out = tmp_out;
	return 0;
}
