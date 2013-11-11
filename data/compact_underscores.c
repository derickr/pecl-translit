#include "translit_types.h"

int compact_underscores_convert(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length)
{
	unsigned int i, out_idx;
	unsigned short *tmp_out;
	unsigned int    str_length, initial, count;
	
	/* Determine initial string length */
	str_length = in_length;
	tmp_out = (unsigned short *) malloc((str_length * sizeof(unsigned short)));
	out_idx = 0;
	initial = 1;
	count   = 0;

	/* Loop over input array */
	for (i = 0; i < in_length; i++) {
		if (initial) {
			if (in[i] != (unsigned short) '_') {
				tmp_out[out_idx] = in[i];
				out_idx++;
				initial = 0;
			}
		} else if (in[i] == (unsigned short) '_') {
			if (count == 0) {
				tmp_out[out_idx] = in[i];
				out_idx++;
				count++;
			}
		} else {
			tmp_out[out_idx] = in[i];
			out_idx++;
			count = 0;
		}
	}
	while ((out_idx > 0) && tmp_out[out_idx - 1] == (unsigned short) '_') {
		out_idx--;
	}
	*out_length = out_idx;
	*out = tmp_out;
	return 0;
}
