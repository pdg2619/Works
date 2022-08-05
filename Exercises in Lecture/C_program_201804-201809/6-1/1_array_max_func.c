#include <stdio.h>

#define NUM_ARRAY	5

int max_of(int a[], int n)
{
	int i;
	int max = a[0];

	for( i = 0; i < n; i++) {
		if ( ( i > 0 ) && ( a[i] > max ) ) {
			max = a[i];
		}
	}

	return (max);
}

int min_of(int a[], int n)
{
	int i;
	int min = a[0];

	for ( i = 0; i < n; i++) {
		if ( ( i > 0 ) && ( a[i] < min ) ) {
			min = a[i];
		}
	}

	return (min);
}

int main(void)
{
	int max, min;
	int a[NUM_ARRAY] = {83, 95 ,85, 63, 89};

	printf ("数列の最大値, 最小値を求めます。\n");

	max = max_of(a, NUM_ARRAY);
	min = min_of(a, NUM_ARRAY);

	printf ("max = %d, min = %d\n", max, min);

	return(0);
}