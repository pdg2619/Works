#include <stdio.h>

int main(void)
{
	int a, d, i, sum;
	sum = 0;
	a = 3;
	d = 2;
	
	for (i = 0; i <= 10; i++ ) {
		printf("%2d 番目の数列は%d です。\n", i, a + i*d);
		sum += (a + i*d);
	}
	printf("この数列の総和は%d です。\n", sum);
	
	return (0);
}