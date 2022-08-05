#include <stdio.h>

int main(void)
{
	int i, sum = 0, x[11];
	
	for (i = 0; i <= 10; i++ ) {
		x[i] = 3 + i*2;
		printf("%2d 番目の数列は%d です。\n", i, x[i]);
		sum += x[i];
	}
	printf("この数列の総和は%d です。\n", sum);
	
	return (0);
}