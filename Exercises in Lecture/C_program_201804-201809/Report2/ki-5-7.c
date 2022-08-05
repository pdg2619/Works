/* 行列の自乗を求めて表示するプログラミング */
#include <stdio.h>

#define NUM_MATRIX_ROW		2	/* マクロで, 行列の行数を(NUM_MATRIX_ROW)を指定. */ 
#define NUM_MATRIX_COLUMN	2	/* マクロで, 行列の列数を(NUM_MATRIX_COLUMN)を指定. */ 


int main(void)
{
	/* int 型の変数 i, j , sum1, sum2, k を宣言する.  */
	int i, j, sum1, sum2, k;					
	int a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = {{0, 0}, {3, 0}};	/* 行列Aの成分を指定.  */
	int b[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = {{1, 1}, {-1, -1}};	/* 行列Bの成分を指定.  */
	int x1[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = {{0}};		/* 行列A²の成分を初期化. */
	int x2[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = {{0}};		/* 行列B²の成分を初期化. */
	
	for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {			/* 行列A², B²を求める.  */
		for (j = 0; j < NUM_MATRIX_COLUMN; j++) {
			sum1 = 0;
			sum2 = 0;	
			for (k=0; k<2; k++) {
				sum1 += a[i][k] * a[k][i];		/* 行列A²の各成分を求める. */	
				sum2 += b[i][k] * b[k][i];		/* 行列B²の各成分を求める. */
			}
			x1[i][j] = sum1;				/* 行列A²の各成分を配列に代入. */
			x2[i][j] = sum2;				/* 行列B²の各成分を配列に代入. */
		}
	}
	printf("A²\n");							/* 行列A²を表示.  */
	for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {		
		for (j = 0; j < NUM_MATRIX_COLUMN; j++) {
		printf("%2d  ", x1[i][j]);
			}
	printf("\n");
	}
	printf("B²\n");							/* 行列B²を表示.  */
	for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {		
		for (j = 0; j < NUM_MATRIX_COLUMN; j++) {
		printf("%2d  ", x2[i][j]);
			}
	printf("\n");
	}
	
	return (0);							/* 0 を戻してmain関数を終了する. */
}