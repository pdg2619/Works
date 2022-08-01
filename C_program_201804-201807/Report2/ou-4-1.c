/* キーボードに入力した整数n以下の奇数を表示するプログラミング */
#include<stdio.h>

int main(void)
{
	int i, n;				/* int 型の変数 i, n を宣言する.  */
	
	printf("整数：");			/*「整数 : 」を表示. */
	scanf("%d", &n);			/* キーボードで整数んnを入力する. */

	for (i = 1; i <= n; i +=2 ) {		/* 整数n以下の奇数を求めて表示. */
		printf("%d ", i);
	}
	printf("\n");				/* 0 を戻してmain関数を終了する. */
	
	return 0;
}