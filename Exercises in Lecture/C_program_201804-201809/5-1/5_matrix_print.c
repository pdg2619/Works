#include <stdio.h>

#define NUM_MATRIX_ROW		4
#define NUM_MATRIX_COLUMN	3


int main(void)
{
	int i, j, a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = { {1, 5, 9}, {2, 6, 10}, {3, 7, 11}, {4, 8, 12} };
	
	printf("Matrix A\n");
	for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {		
		for (j = 0; j < NUM_MATRIX_COLUMN; j++) {
			printf("%2d  ", a[i][j]);
		}
	printf("\n");
	}
	
	return (0);
}