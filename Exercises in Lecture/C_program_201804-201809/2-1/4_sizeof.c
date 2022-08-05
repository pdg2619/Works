#include<stdio.h>

int main(void)
{
 short int a;		/* short int型の変数 aの宣言. */
 unsigned short int b;	/* unsigned short int型の変数 bの宣言. */
 int c;			/* int型の変数 cの宣言. */
 unsigned int d;	/* unsigned int型の変数 dの宣言. */
 long int e;		/* long int型の変数 eの宣言. */
 unsigned long int f;	/* unsigned long int型の変数 fの宣言. */
 float x;		/* float型の変数 xの宣言. */
 double y;		/* double型の変数 yの宣言. */
 long double z; 	/* long double型の変数 zの宣言. */
 
 printf("a = %d byte \n",sizeof(a));			/* 変数 aの大きさを出力する．*/
 printf("b = %d byte \n",sizeof(b));			/* 変数 bの大きさを出力する．*/
 printf("c = %d byte \n",sizeof(c));			/* 変数 cの大きさを出力する．*/
 printf("d = %d byte \n",sizeof(d));			/* 変数 dの大きさを出力する．*/
 printf("e = %d byte \n",sizeof(e));			/* 変数 eの大きさを出力する．*/
 printf("f = %d byte \n",sizeof(f));			/* 変数 fの大きさを出力する．*/
 printf("x = %f byte \n",sizeof(x));			/* 変数 xの大きさを出力する．*/
 printf("y = %f byte \n",sizeof(y));			/* 変数 yの大きさを出力する．*/
 printf("z = %f byte \n",sizeof(z));			/* 変数 zの大きさを出力する．*/

 return (0);
}