﻿/* 整数を入力して奇数ならば2で除算し、偶数ならば3倍しで1をたす値を表示するプログラム. */
#include <stdio.h>

int main(void)							/* main関数を開始する．*/
{
	int n;

	printf("整数を入力してくだし:");			/*「整数を入力してください:」を表示. */
	scanf("%d",&n);						/* キーボードで整数んnを入力する. */

	switch ( n % 2 ) {
		case 0 : printf("%d",n / 2); break;		/* 整数を2で除算し、余りが0ならば、整数を2で除算した値を表示する. */
		case 1 : printf("%d",3 * n + 1); break;		/* 整数を2で除算し、余りが0ではないと、3倍しで1をたす値を表示する. */
	}
	
	return 0;						/* 0 を戻してmain関数を終了する. */
}