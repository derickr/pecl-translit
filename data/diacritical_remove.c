/*
 * Warning: Do not edit!
 * This file is generated from a transliteration definition table with the name
 * "diacritical_remove.tr".
 */
#include "translit_types.h"

static unsigned char diacritical_remove_jump_map_0[256] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 
	1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1
};

static unsigned char diacritical_remove_jump_map_1[256] = {
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

static unsigned char diacritical_remove_jump_map_30[256] = {
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0
};

static unsigned short diacritical_remove_replace_map_0[256] = {
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	 65,  65,  65,  65,  65,  65,   0,  67,  69,  69,  69,  69,  73,  73,  73,  73, 
	 68,  78,  79,  79,  79,  79,  79,   0,  79,  85,  85,  85,  85,  89,   0,   0, 
	 97,  97,  97,  97,  97,  97,   0,  99, 101, 101, 101, 101, 105, 105, 105, 105, 
	100, 110, 111, 111, 111, 111, 111,   0, 111, 117, 117, 117, 117, 121,   0, 121
};

static unsigned short diacritical_remove_replace_map_1[256] = {
	 65,  97,  65,  97,  65,  97,  67,  99,  67,  99,  67,  99,  67,  99,  68, 100, 
	 68, 100,  69, 101,  69, 101,  69, 101,  69, 101,  69, 101,  71, 103,  71, 103, 
	 71, 103,  71, 103,  72, 104,  72, 104,  73, 105,  73, 105,  73, 105,  73, 105, 
	 73, 105,   0,   0,  74, 106,  75, 107, 107,  76, 108,  76, 108,  76, 108,  76, 
	108,  76, 108,  78, 110,  78, 110,  78, 110, 110,  78, 110,  79, 111,  79, 111, 
	 79, 111,   0,   0,  82, 114,  82, 114,  82, 114,  83, 115,  83, 115,  83, 115, 
	 83, 115,  84, 116,  84, 116,  84, 116,  85, 117,  85, 117,  85, 117,  85, 117, 
	 85, 117,  85, 117,  87, 119,  89, 121,  89,  90, 122,  90, 122,  90, 122, 115, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0, 497, 498, 499,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 
	  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};

static unsigned short diacritical_remove_replace_map_30[256] = {
	 65,  97,  66,  98,  66,  98,  66,  98,  67,  99,  68, 100,  68, 100,  68, 100, 
	 68, 100,  68, 100,  69, 101,  69, 101,  69, 101,  69, 101,  69, 101,  70, 102, 
	 71, 103,  72, 104,  72, 104,  72, 104,  72, 104,  72, 104,  73, 105,  73, 105, 
	 75, 107,  75, 107,  75, 107,  76, 108,  76, 108,  76, 108,  76, 108,  77, 109, 
	 77, 109,  77, 109,  78, 110,  78, 110,  78, 110,  78, 110,  79, 111,  79, 111, 
	 79, 111,  79, 111,  80, 112,  80, 112,  82, 114,  82, 114,  82, 114,  82, 114, 
	 83, 115,  83, 115,  83, 115,  83, 115,  83, 115,  84, 116,  84, 116,  84, 116, 
	 84, 116,  85, 117,  85, 117,  85, 117,  85, 117,  85, 117,  86, 118,  86, 118, 
	 87, 119,  87, 119,  87, 119,  87, 119,  87, 119,  88, 120,  88, 120,  89, 121, 
	 90, 122,  90, 122,  90, 122, 104, 116, 119, 121,  97, 115,   0,   0,   0,   0, 
	 65,  97,  65,  97,  65,  97,  65,  97,  65,  97,  65,  97,  65,  97,  65,  97, 
	 65,  97,  65,  97,  65,  97,  65,  97,  69, 101,  69, 101,  69, 101,  69, 101, 
	 69, 101,  69, 101,  69, 101,  69, 101,  73, 105,  73, 105,  79, 111,  79, 111, 
	 79, 111,  79, 111,  79, 111,  79, 111,  79, 111,  79, 111,  79, 111,  79, 111, 
	 79, 111,  79, 111,  85, 117,  85, 117,  85, 117,  85, 117,  85, 117,  85, 117, 
	 85, 117,  89, 121,  89, 121,  89, 121,  89, 121,   0,   0,   0,   0,   0,   0
};

static unsigned char *jump_table[3] = {
	diacritical_remove_jump_map_0,
	diacritical_remove_jump_map_1,
	diacritical_remove_jump_map_30,
};
static unsigned short *map_table[3] = {
	diacritical_remove_replace_map_0,
	diacritical_remove_replace_map_1,
	diacritical_remove_replace_map_30,
};
static us0 *expand_table[0] = {
};
static unsigned short *transpose_table[0] = {
};


int diacritical_remove_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length)
{
	unsigned int i, j, no_jump, jump, out_idx;
	unsigned char block, cp;
	unsigned char *jump_map;
	unsigned short *replace_map, *transpose_map;
	us0 *expand_map;
	unsigned short *tmp_out;
	unsigned int    str_length;

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
			case 0: jump_map = jump_table[0]; replace_map = map_table[0]; break;
			case 1: jump_map = jump_table[1]; replace_map = map_table[1]; break;
			case 30: jump_map = jump_table[2]; replace_map = map_table[2]; break;
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
			case 4: /* Transpose Up */
				tmp_out[out_idx] = in[i] + transpose_map[cp];
				out_idx++;
				break;
			case 5: /* Transpose Down */
				tmp_out[out_idx] = in[i] - transpose_map[cp];
				out_idx++;
				break;
		}
	}
	*out_length = out_idx;
	*out = tmp_out;
	return 0;
}

#if DEBUG_FILTER
int main(void)
{
	unsigned char *str, *outs;
	unsigned short *in, *out;
	unsigned int inl, outl, i, c;

	str = (char*) malloc(2049);
	in = (unsigned short*) str;

	while ((c = read(0, str, 2048)) > 0) {
		diacritical_remove_convert(in, c/2, &out, &outl);
		outs = (unsigned char*) out;

		for (i = 0; i < (outl * sizeof(unsigned short)); i++) {
			printf("%c", outs[i]);
		}
	}
}
#endif
