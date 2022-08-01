#include<stdio.h>

int main(void)
{
 int a, b;						/* int型の変数 a, bの宣言. */
 puts("二つの整数を入力してください。");		/* 「二つの整数を入力してください」を表示する． */
 printf("整数A:"); scanf("%d", &a);			/* 「整数A:」を表示し、キーボードで整数aを入力する． */
 printf("整数B:"); scanf("%d", &b);			/* 「整数B:」を表示し、キーボードで整数bを入力する． */

 printf("これらの平均は %d です。\n", (a + b)/2);	/* aとbのを平均をで表示する． */

 return (0);
}