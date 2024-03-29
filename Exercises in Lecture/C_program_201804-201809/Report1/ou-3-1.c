﻿#include <stdio.h>

int main(void)			/* main関数を開始する．*/ 
{
	int n, a, b;		/*int 型の変数 n, a, b を宣言する.  */
	
	/*「実行したい演算は 
           加算(1), 減算(2), 乗算(3), 除算(4) のでれですか?
	   実行したい演算に対応する数を入力してください:」を表示する．*/
	
	printf("実行したい演算は\n"
		"加算(1), 減算(2), 乗算(3), 除算(4) のでれですか?\n"
		"実行したい演算に対応する数を入力してください:");					
	scanf("%d", &n);	
	
	/* キーボードで整数nを入力する． */

	switch ( n ) {
	/* 整数n が1の場合、 キーボードで整数a, bを入力するとaとbを加算した結果を表示する．*/
		case 1 : printf("1つ目の整数A(10進 1桁)を入力してください:"); 
			 scanf("%d", &a);
			 printf("2つ目の整数A(10進 1桁)を入力してください:");
			 scanf("%d", &b);
			 printf("加算を実行します。\n""A + B = %d", a + b); break; 

	/* 整数n が2の場合、 キーボードで整数a, bを入力するとaとbを減算した結果を表示する．*/
		case 2 : printf("1つ目の整数A(10進 1桁)を入力してください:"); 
			 scanf("%d", &a);
			 printf("2つ目の整数A(10進 1桁)を入力してください:");
			 scanf("%d", &b);
			 printf("減算を実行します。\n""A - B = %0.0f", ((double) a - b)); break;

	/* 整数n が3の場合、 キーボードで整数a, bを入力するとaとbを減算した結果を表示する．*/
		case 3 : printf("1つ目の整数A(10進 1桁)を入力してください:"); 
			 scanf("%d", &a);
			 printf("2つ目の整数A(10進 1桁)を入力してください:");
			 scanf("%d", &b);
			 printf("乗算を実行します。\n""A * B = %d", a * b); break;

	/* 整数n が4の場合、 キーボードで整数a, bを入力するとaとbを減算した結果を表示する．*/
		case 4 : printf("1つ目の整数A(10進 1桁)を入力してください:"); 
			 scanf("%d", &a);
			 printf("2つ目の整数A(10進 1桁)を入力してください:");
			 scanf("%d", &b);
			 printf("除算を実行します。\n""A / B = %0.12f", ((double) a / b)); break;
	/* 整数n が5の場合、「無効な数字を入力されました。終了します。」を表示する．*/
		default : printf("無効な数字を入力されました。終了します。"); break;
	}
	
	return (0);	/* 0 を戻してmain関数を終了する. */
}