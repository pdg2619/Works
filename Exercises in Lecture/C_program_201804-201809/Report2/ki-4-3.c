/* 1からキーボードに入力した整数nまでの和を表示するプログラミング */
#include<stdio.h>

int main(void)
{
	int i, n;					/* int 型の変数 i, n を宣言する.  */
	int sum = 0;					/* int 型の変数 sumを宣言する.  */
	printf("整数 : ");				/*「整数 : 」を表示. */
	scanf("%d", &n);				/* キーボードで整数んnを入力する. */

	for (i = 1; i <= n; i++) {			/* 1から整数nまでの和を求める. */				
		sum += i;
	}
	
	printf("1から%dまでの和は%d\n", n, sum);	/* 1からnまでの和を表示. */
	
	return 0;					/* 0 を戻してmain関数を終了する. */
}