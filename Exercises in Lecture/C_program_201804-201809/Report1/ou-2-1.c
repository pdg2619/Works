#include<stdio.h>
#include<math.h>

int main(void)						/* main関数を開始する．*/
{
	double n = 1.24e2;				/* 変数nを不動小数点型で宣言. */

	printf("%d\n",((int)sqrt(n)*(int)sqrt(n)));	/* 変数(√n)^2を整数型で表示する. */
	printf("%f",(sqrt(n)*sqrt(n)));			/* 変数(√n)^2を浮動小数点型で表示する. */

	return(0);
}