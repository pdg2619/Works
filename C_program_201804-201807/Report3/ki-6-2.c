/* キーボードに入力した整数n,rに対して二項係数nCr計算するプログラミング */
#include <stdio.h>

double factorial(double a)	/* factorialを 求める 関数 */
{
	int i = 0;
	double result = 1;
	
	for(i = a; i > 0; i--)
	{
		result *= i;
	}
	return(result);
}

int main(void)
{
	int n = 0; 
	int r = 0;
	int k = 0;
	double C = 0;
	/* int 型の変数 n, r, k, double 型の変数 C を宣言し, 初期化  */

	printf("n = ");		/*「n = 」を表示. */
	scanf("%d", &n);	/* キーボードで整数んnを入力する */
	printf("r = ");		/*「r = 」を表示. */
	scanf("%d", &r);	/* キーボードで整数んrを入力する */
	if ( ( n >= 0 ) && ( r >= 0 ) && ( n >= r ) ) { /* n >= 0 & r >= 0 & n >= r を満たすとき、以下の演算を進行 */
	k = n - r;		/* n-rを計算し、kに代入 */
	printf("nCr = %.0lf", C = (factorial(n)/factorial(k)/factorial(r))); /* nCrを計算し, 出力 */
	}
	else {			/* その以外の場合、進行しない */
	}
	printf("\n");
	return(0);
}