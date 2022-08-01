#include <stdio.h>
#include <math.h>

#define NUM_ARRAY	5


int main(void)
{
	int i, max = 0, min = 0;
	int a[NUM_ARRAY] = {83, 95, 85 ,63, 89};
	
	printf("数列の最大値, 最小値を求めます。\n");

	min = max = a[0];

	for ( i = 0; i < NUM_ARRAY; i++ ) {
		if ( i != ( NUM_ARRAY - 1 ) ) {
			printf("a[%d] = %d, ", i, a[i]);
		}
		else {
			printf("a[%d] = %d\n", i, a[i]);
		}

		if ( ( i > 0 ) && ( a[i] > max ) ) {
			max = a[i];
		}

		if ( ( i > 0 ) && ( a[i] < min ) ) {
			min = a[i];
		}
	}
	
	printf("max = %d, min = %d\narithmetic mean = %lf , geometrical mean = %lf\n", max, min, ((double)(max+min)/2), ((double)sqrt((max)*(min))));
		
	return (0);
}