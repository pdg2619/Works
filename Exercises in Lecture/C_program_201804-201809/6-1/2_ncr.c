#include <stdio.h>

double factorial(double a)
{
	int i = 0;
	double result = 1;
	
	for(i = a; i > 0; i--)
	{
		result *= i;
	}
	return(result);
}

int main(void)
{
	int n = 0; 
	int r = 0;
	int k = 0;
	double C = 0;
	

	printf("n = ");
	scanf("%d", &n);
	printf("r = ");
	scanf("%d", &r);
	k = n - r;
	printf("nCr = %.0lf", C = (factorial(n)/factorial(k)/factorial(r)));
	printf("\n");
	return(0);
}