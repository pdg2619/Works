#include <stdio.h>
#include <time.h>

#
#define MAX_NUM_FIBONACCI 27
#define NUM_LOOP 10000

double Fibonacci_compute_recursive(int n)
{
	double DATA[MAX_NUM_FIBONACCI] = {1, 1};
	int last = 1;
	int k = 0;
	if ( DATA[n-1] == 0 )
	{
		for(k = last+1; k < n; k++)
		{
			DATA[k] = DATA[k-1] + DATA[k-2];
		}
		last = n-1;
	}
	return (DATA[n-1]); 
}

int main(void)
{
 	clock_t start, end;
	start = clock();
	int i, k ;
	for(k=1; k<=NUM_LOOP; k++){
		for(i=1; i<=MAX_NUM_FIBONACCI; i++) 
		{  
		Fibonacci_compute_recursive(i);  
		}  
	}
	end = clock();
	
	printf("処理時間: %f 炒 \n", (double)(end - start) / CLOCKS_PER_SEC);

	return (0);
}