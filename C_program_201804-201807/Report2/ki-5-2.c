﻿/* 初項が3, 公比2の等比数列を第10項まで表示してその総和表示するプログラミング */
#include <stdio.h>
#include <math.h>

int main(void)
{
	int i; 								/* int 型の変数 i を宣言する.  */
	int sum = 0;							/* int 型の変数 sumを宣言する.  */
	int x[11] = {0};						/* 配列を 11項まで宣言する.  */
	
	for (i = 0; i <= 10; i++ ) {					/* 初項が3, 公比2の等比数列を求めて，表示. */
		x[i] = 3*(pow(2,i));
		printf("%2d 番目の数列は %4d です。\n", i, x[i]);
		sum += x[i];						/* 等比数列の総和を求める. */
	}
	printf("この数列の総和は %d です。\n", sum);			/* 等比数列の総和を表示. */
	
	return (0);							/* 0 を戻してmain関数を終了する. */
}