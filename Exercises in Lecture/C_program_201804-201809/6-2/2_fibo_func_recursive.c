/*  Fibonacci数列を計算する時間を計算するプログラム. */
#include <stdio.h>
#include <time.h>

#define MAX_NUM_FIBONACCI 27		/* 定数マクロ MAX_NUM_FIBONACCIを 27で定義する．*/
#define NUM_LOOP 10000			/* 定数マクロ NUM_LOOPを 10000で定義する．*/

double Fibonacci_compute_recursive(int n)	/* Fibonacci数列を計算する関数. */
{
	if( n < 2 ){
	return(1);
	}
	else {
	return(Fibonacci_compute_recursive(n-1) + Fibonacci_compute_recursive(n-2));
	}
}

int main(void)			/* main関数を開始する. */
{
 	clock_t start, end;	/* 時間関数 start, end 宣言. */
	start = clock();	/* Fibonacci数列を計算する時間の始点を設定. */
	int i, k ;		/*int 型の変数 i, j 宣言 */
	for(k=1; k<=NUM_LOOP; k++){
		for(i=1; i<=MAX_NUM_FIBONACCI; i++) 
		{  
		Fibonacci_compute_recursive(i);  
		}  
	}
	end = clock();		/* Fibonacci数列を計算する時間の終点を設定. */
	printf("処理時間: %f 炒 \n", (double)(end - start) / CLOCKS_PER_SEC); /*処理時間を表示. */
	return (0);
}