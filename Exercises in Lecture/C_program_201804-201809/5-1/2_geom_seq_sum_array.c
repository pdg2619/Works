#include <stdio.h>
#include <math.h>

int main(void)
{
	int i; 
	int sum = 0;
	int x[11] = {0};
	
	for (i = 0; i <= 10; i++ ) {
		x[i] = 3*(pow(2,i));
		printf("%2d 番目の数列は %4d です。\n", i, x[i]);
		sum += x[i];
	}
	printf("この数列の総和は %d です。\n", sum);
	
	return (0);
}