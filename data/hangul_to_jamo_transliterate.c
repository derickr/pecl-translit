#include "translit_types.h"

int hangul_to_jamo_transliterate_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length)
{
	unsigned int i, out_idx;
	unsigned short *tmp_out;
	unsigned int    str_length, SIndex;
	unsigned short  SBase = 0xAC00, LBase = 0x1100, VBase = 0x1161, L, V, T;
	unsigned short  TBase = 0x11A7, SCount = 11172, VCount = 21, TCount = 28, NCount;

	NCount = VCount * TCount;
	
	/* Determine initial string length */
	str_length = in_length;
	tmp_out = (unsigned short *) malloc((str_length * sizeof(unsigned short)) + 8);
	out_idx = 0;

	/* Loop over input array */
	for (i = 0; i < in_length; i++) {
		if (out_idx > str_length) {
			str_length += 128;
			tmp_out = (unsigned short *) realloc(tmp_out, (str_length * sizeof(unsigned short)) + 8);
		}
		
		SIndex = in[i] - SBase;
		if (SIndex >= 0 && SIndex < SCount) {
			L = LBase + SIndex / NCount;
			V = VBase + (SIndex % NCount) / TCount;
			T = TBase + SIndex % TCount;
			tmp_out[out_idx] = L;
			out_idx++;
			tmp_out[out_idx] = V;
			out_idx++;
			if (T != TBase) {
				tmp_out[out_idx] = T;
				out_idx++;
			}
		} else {
			tmp_out[out_idx] = in[i];
			out_idx++;
		}
	}
	*out_length = out_idx;
	*out = tmp_out;
	return 0;
}
