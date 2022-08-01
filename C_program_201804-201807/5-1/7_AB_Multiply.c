#include <stdio.h>

#define NUM_MATRIX_ROW		2
#define NUM_MATRIX_COLUMN	2


int main(void)
{
	int i, j, sum1, sum2, k;
	int a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = {{0, 0}, {3, 0}};
	int b[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = {{1, 1}, {-1, -1}};
	int x1[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = {{0}};
	int x2[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = {{0}};
	
	for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {		
		for (j = 0; j < NUM_MATRIX_COLUMN; j++) {
			sum1 = 0;
			sum2 = 0;	
			for (k=0; k<2; k++) {
				sum1 += a[i][k] * a[k][i];
				sum2 += b[i][k] * b[k][i];
			}
			x1[i][j] = sum1;
			x2[i][j] = sum2;
		}
	}
	printf("A²\n");
	for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {		
		for (j = 0; j < NUM_MATRIX_COLUMN; j++) {
		printf("%2d  ", x1[i][j]);
			}
	printf("\n");
	}
	printf("B²\n");
	for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {		
		for (j = 0; j < NUM_MATRIX_COLUMN; j++) {
		printf("%2d  ", x2[i][j]);
			}
	printf("\n");
	}
	
	return (0);
}