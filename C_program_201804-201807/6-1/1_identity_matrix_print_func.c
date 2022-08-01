#include <stdio.h>

#define NUM_MATRIX_ROW		6
#define NUM_MATRIX_COLUMN	6

void id_mat_set(int a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN])
{
	int i, j;
	
	for( i = 0; i < NUM_MATRIX_ROW; i++) {
		for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {
			a[i][j] = 0;
		}
		a[i][i] = 1;
	}
}

int main(void)
{
	int i, j, mat_i[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN];

	id_mat_set(mat_i);	

	printf ("Identity Matrix E\n");
	for( i = 0; i < NUM_MATRIX_ROW; i++ ){
		for( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {
			printf("%2d  ", mat_i[i][j]);
		}
		printf("\n");
	}

	return(0);
}