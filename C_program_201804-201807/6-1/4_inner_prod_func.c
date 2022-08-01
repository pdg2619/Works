#include <stdio.h>

#define DIM_VECTOR 8

void dim_vector(double x[DIM_VECTOR], double y[DIM_VECTOR], int i, double inner_product)
{
	for(i = 0; i <= DIM_VECTOR; i++){
		inner_product += x[i] * y[i];
	}
}

int main(void)
{
	int i = 0;
	double inner_product = 0;
	double x[DIM_VECTOR] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};
	double y[DIM_VECTOR] = {2.3, -13, 9.8, -4.5, 2.3, 0, -0.03, 0.126250};
	printf("x = { ");
	for(i = 0; i <= DIM_VECTOR; i++){
		printf("%lf ", x[i]);
	}
	printf("}\n");
	printf("y = { ");
	for(i = 0; i <= DIM_VECTOR; i++){
		printf("%lf ", y[i]);
	}
	printf("}\n");
	printf("内積は %lf です。", inner_product);

	return(0);
	
}