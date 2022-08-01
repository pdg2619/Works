#include <stdio.h>

#define NUM_ARITH_SEQ 11


int main(void)
{
	int i, sum = 0, x[NUM_ARITH_SEQ];
	
	for (i = 0; i < NUM_ARITH_SEQ; i++ ) {
		x[i] = 3 + i*2;
		printf("%2d 番目の数列は%d です。\n", i, x[i]);
		sum += x[i];
	}
	printf("この数列の総和は%d です。\n", sum);
	
	return (0);
}