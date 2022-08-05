/* キーボードに入力した整数x,yの最小公倍数計算するプログラミング */
#include <stdio.h>

double gcd(int x, int y)	/* 最大公約数を 求める 関数 */
{
	if( y==0 ) {
		return (x);
	}
	else
		return(gcd(y, x%y));
	}

double lcm(int x, int y)	/* 最小公倍数を 求める 関数 */
{
	int result = 0;
	if( x==0||y==0 ) {
		return (0);
	}
	else {
		result = (x*y) / gcd(x,y);
	}
	return(result);
}

int main(void)
{
	int a = 0; 
	int b = 0;
	double Z = 0;
	/* int 型の変数 a, b, double 型の変数 Z を宣言し, 初期化  */

	printf("整数 A を入力してください : ");		/*「整数 A を入力してください : 」を表示. */
	scanf("%d", &a);	/* キーボードで整数んAを入力する */
	printf("整数 B を入力してください : ");		/*「整数 B を入力してください : 」を表示. */
	scanf("%d", &b);	/* キーボードで整数んBを入力する */
	if ( ( a >= 0 ) && ( b >= 0 ) ) { /* a ≥ 0 & b ≥ 0を満たすとき、以下の演算を進行 */
	printf("最小公倍数は %.0lf です。", Z = lcm(a, b));
	}
	else {			/* その以外の場合、進行しない */
	}
	printf("\n");
	return(0);
}