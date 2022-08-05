#include <stdio.h>

#define NUM_MATRIX_ROW		2
#define NUM_MATRIX_COLUMN	2


int main(void)
{
	int i, j, sum, k;
	int a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = {{3, 9}, {0, -1}};
	int x[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = {{0, 0}, {0, 0}};
	
	printf("B²\n");

	for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {		
		for (j = 0; j < NUM_MATRIX_COLUMN; j++)
		{
		}
	}
	
	for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {		
		for (j = 0; j < NUM_MATRIX_COLUMN; j++) {
			sum = 0;	
			for (k = 0; k < 2; k++) {
				sum += a[i][k] * a[k][i];
			}
			x[i][j] = sum;
		}
	}
	for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {		
		for (j = 0; j < NUM_MATRIX_COLUMN; j++) {
		printf("%2d  ", x[i][j]);
			}
	printf("\n");
	}
	
	return (0);
}