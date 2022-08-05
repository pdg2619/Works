/*　sin60˚, cos60˚, tan60˚の値を表示するプログラム */
#include<stdio.h>
#include<math.h>
 
int main(void)　/* main関数を開始する．*/
{
 long double x, ys, yc, yt, pi=3.14159265358979323846; /* 変数x, ys, yc, yt, piを宣言 */

 x = (60.0)*(pi/180.0);                                /* xに角の値に代入する */

  ys = sin(x);                                         /* ysにsin(x)の値を代入する */
  yc = cos(x);                                         /* ycにcos(x)の値を代入する */
  yt = tan(x);                                         /* ytにtan(x)の値を代入する */

 printf("ys = %Lf\n", ys);                             /* ysの値を表示する */
 printf("yc = %Lf\n", yc);                             /* ycの値を表示する */
 printf("yt = %Lf\n", yt);                             /* ytの値を表示する */

 return (0);
}