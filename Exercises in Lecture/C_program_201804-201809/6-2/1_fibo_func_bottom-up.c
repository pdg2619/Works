/* 二項係数nCrを動的計画法で, 計算するプログラム. */
#include <stdio.h>

#define MAX_NUM_FIBONACCI 60			/* 定数マクロ MAX_NUM_FIBONACCIを 60 で定義する．*/

double Fibonacci_compute(int n)			/* Fibonacci数列を計算する関数. */
{
	double DATA[MAX_NUM_FIBONACCI] = {1, 1};	
	int last = 1;
	int k = 0;
	if ( DATA[n-1] == 0 )
	{
		for(k = last+1; k < n; k++)
		{
			DATA[k] = DATA[k-1] + DATA[k-2];
		}
		last = n-1;
	}
	return (DATA[n-1]); 
}
int main(void)				/* main関数を開始する. */
{
 	int i;				/* int 型の変数 i 宣言 */
	
	for(i=1; i<=(MAX_NUM_FIBONACCI+1); i++) 	/* 変数iが(i = MAX_NUM_FIBONACCI)を満たすまでに、以下の文を繰り返す．*/
	{  
		if( i <= MAX_NUM_FIBONACCI){		/* 数列の途中には「，」を付けるし, 数列の末端は空白にする条件文*/
		printf("%14.0lf, ", Fibonacci_compute(i)); 
		}
		else{
		printf("%14.0lf", Fibonacci_compute(i));
		}	
	}  
	
	printf("\n"); 
	return(0); 
}