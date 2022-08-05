#include <stdio.h>

#define NUM_MATRIX_ROW		6
#define NUM_MATRIX_COLUMN	6


int main(void)
{
	int i, j, a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = {{0, 0, 0, 0, 0, 0}};
	
	printf("Zero Matrix\n");
	for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {		
		for (j = 0; j < NUM_MATRIX_COLUMN; j++) {
			printf("%2d  ", a[i][j]);
		}
	printf("\n");
	}
	
	return (0);
}