#include <malloc.h>

typedef unsigned short us0[1];
typedef unsigned short us1[2];
typedef unsigned short us2[3];
typedef unsigned short us3[4];
typedef unsigned short us4[5];
typedef unsigned short us5[6];
typedef unsigned short us6[7];
typedef unsigned short us7[8];
typedef unsigned short us8[9];
typedef unsigned short us9[10];

typedef int (*translit_func_t)(unsigned short *in, unsigned int in_length, unsigned short **out, unsigned int *out_length);
