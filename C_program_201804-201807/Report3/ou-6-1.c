/*  Fibonacci数列を計算するプログラム. */
#include <stdio.h>

#define MAX_NUM_FIBONACCI 60		/* 定数マクロ MAX_NUM_FIBONACCIを 43 で定義する．*/

double Fibonacci_compute(int n) 	/* Fibonacci数列を計算する関数. */
{
	if( n < 2 ){
	return(1);
	}
	else {
	return(Fibonacci_compute(n-1) + Fibonacci_compute(n-2));
	}
}
int main(void)				/* main関数を開始する. */
{
 	int i;			/*int 型の変数 i 宣言 */		
	
	for(i=1; i<=MAX_NUM_FIBONACCI; i++) 	/* 変数iが(i = MAX_NUM_FIBONACCI)を満たすまでに、以下の文を繰り返す．*/
	{  
		if( i < MAX_NUM_FIBONACCI){	/* 数列の途中には「，」を付けるし, 数列の末端は空白にする条件文*/
		printf("%14.0lf, ", Fibonacci_compute(i)); 
		}
		else{
		printf("%14.0lf", Fibonacci_compute(i));
		}		 
	}  
	printf("\n"); 
	return(0); 
}