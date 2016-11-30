/*
 * Warning: Do not edit!
 * This file is generated from a transliteration definition table with the name
 * "cyrillic_transliterate.tr".
 */
#include "translit_types.h"

static unsigned char cyrillic_transliterate_jump_map_4[256] = {
	2, 2, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2, 
	1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 2, 
	1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 2, 
	2, 2, 2, 1, 1, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 2, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

static unsigned short cyrillic_transliterate_replace_map_4[256] = {
	  0,   0,  68,  71,   0,   0,   0,   0,  74,   0,   0,   0,   0,  73,  86,   0, 
	 65,  66,  86,  71,  68,  69,   0,  90,  73,  74,  75,  76,  77,  78,  79,  80, 
	 82,  83,  84,  85,  70,  72,  67,   0,   0,   0,  39,  89,  39,  69,   0,   0, 
	 97,  98, 118, 103, 100, 101,   0, 122, 105, 106, 107, 108, 109, 110, 111, 112, 
	114, 115, 116, 117, 102, 104,  99,   0,   0,   0,  39, 121,  39, 101,   0,   0, 
	  0,   0,   0, 103, 101, 122, 105,   0, 106,   0,   0,  99,   0, 105, 118,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static us3 cyrillic_transliterate_expand_map_4[256] = {
	{ 2, 73, 69}, { 2, 73, 79}, { 0, 0}, { 0, 0}, { 2, 73, 69}, { 2, 68, 83}, { 2, 73, 73}, { 2, 89, 73}, 
	{ 0, 0}, { 2, 76, 74}, { 2, 78, 74}, { 2, 84, 115}, { 2, 75, 74}, { 0, 0}, { 0, 0}, { 2, 68, 90}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 90, 72}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 67, 72}, 
	{ 2, 83, 72}, { 3, 83, 67, 72}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 89, 85}, { 2, 89, 65}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 122, 104}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 99, 104}, 
	{ 2, 115, 104}, { 3, 115, 99, 104}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 121, 117}, { 2, 121, 97}, 
	{ 2, 105, 101}, { 2, 105, 111}, { 2, 100, 106}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 121, 105}, 
	{ 0, 0}, { 2, 108, 106}, { 2, 110, 106}, { 0, 0}, { 2, 107, 106}, { 0, 0}, { 0, 0}, { 2, 100, 122}, 
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
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}
};

static unsigned char *cyrillic_transliterate_jump_table[1] = {
	cyrillic_transliterate_jump_map_4,
};
static unsigned short *cyrillic_transliterate_map_table[1] = {
	cyrillic_transliterate_replace_map_4,
};
static us3 *cyrillic_transliterate_expand_table[1] = {
	cyrillic_transliterate_expand_map_4,
};


int cyrillic_transliterate_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length)
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
			case 4: jump_map = cyrillic_transliterate_jump_table[0]; replace_map = cyrillic_transliterate_map_table[0]; expand_map = cyrillic_transliterate_expand_table[0]; break;
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
static unsigned char cyrillic_transliterate_bulgarian_jump_map_4[256] = {
	2, 2, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 2, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 2, 
	2, 2, 2, 1, 1, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 2, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

static unsigned short cyrillic_transliterate_bulgarian_replace_map_4[256] = {
	  0,   0,  68,  71,   0,   0,   0,   0,  74,   0,   0,   0,   0,  73,  86,   0, 
	 65,  66,  86,  71,  68,  69,  74,  90,  73,  74,  75,  76,  77,  78,  79,  80, 
	 82,  83,  84,  85,  70,  72,  67,   0,   0,   0,  39,  89,  39,  69,   0,   0, 
	 97,  98, 118, 103, 100, 101, 106, 122, 105, 106, 107, 108, 109, 110, 111, 112, 
	114, 115, 116, 117, 102, 104,  99,   0,   0,   0,  97, 121, 105, 101,   0,   0, 
	  0,   0,   0, 103, 101, 122, 105,   0, 106,   0,   0,  99,   0, 105, 118,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static us3 cyrillic_transliterate_bulgarian_expand_map_4[256] = {
	{ 2, 73, 69}, { 2, 73, 79}, { 0, 0}, { 0, 0}, { 2, 73, 69}, { 2, 68, 83}, { 2, 73, 73}, { 2, 89, 73}, 
	{ 0, 0}, { 2, 76, 74}, { 2, 78, 74}, { 2, 84, 115}, { 2, 75, 74}, { 0, 0}, { 0, 0}, { 2, 68, 90}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 90, 72}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 67, 72}, 
	{ 2, 83, 72}, { 3, 83, 72, 84}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 73, 85}, { 2, 73, 65}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 122, 104}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 99, 104}, 
	{ 2, 115, 104}, { 3, 115, 104, 116}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 105, 117}, { 2, 105, 97}, 
	{ 2, 105, 101}, { 2, 105, 111}, { 2, 100, 106}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 2, 121, 105}, 
	{ 0, 0}, { 2, 108, 106}, { 2, 110, 106}, { 0, 0}, { 2, 107, 106}, { 0, 0}, { 0, 0}, { 2, 100, 122}, 
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
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, 
	{ 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}, { 0, 0}
};

static unsigned char *cyrillic_transliterate_bulgarian_jump_table[1] = {
	cyrillic_transliterate_bulgarian_jump_map_4,
};
static unsigned short *cyrillic_transliterate_bulgarian_map_table[1] = {
	cyrillic_transliterate_bulgarian_replace_map_4,
};
static us3 *cyrillic_transliterate_bulgarian_expand_table[1] = {
	cyrillic_transliterate_bulgarian_expand_map_4,
};


int cyrillic_transliterate_bulgarian_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length)
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
			case 4: jump_map = cyrillic_transliterate_bulgarian_jump_table[0]; replace_map = cyrillic_transliterate_bulgarian_map_table[0]; expand_map = cyrillic_transliterate_bulgarian_expand_table[0]; break;
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
