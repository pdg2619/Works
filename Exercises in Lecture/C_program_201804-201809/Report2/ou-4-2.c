/* キーボードに入力した整数nの正の約数と約数の個数を表示するプログラミング */
#include<stdio.h>

int main(void)
{
	int i, n;					/* int 型の変数 i, n を宣言する.  */
	int x = 0;					/* int 型の変数 x を宣言する.  */
	
	printf("整数：");				/*「整数 : 」を表示. */
	scanf("%d", &n);				/* キーボードで整数んnを入力する. */

	for (i = 1; i <= n; i ++)			/* 整数nの正の約数と約数の個数を求めて表示. */
		{		
			if (n % i == 0)	
			{		
				printf("%d ", i);
				x++;
			}		
		}
	
	printf("\n約数は%d個です。\n", x);	
	return 0;					/* 0 を戻してmain関数を終了する. */
}