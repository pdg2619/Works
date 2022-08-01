/*　2次方程式 ax^2 + bx + c = 0 の根を計算するプログラム. */
#include<stdio.h>
#include<math.h>

/* main関数を開始する．*/
int main(void)
{
/* 変数a, b, c, D, x1, x2, xを宣言. */
double a, b, c, D, x1, x2, x;

/* 「2次方程式 ax^2 + bx + c = 0 の係数 a, b, c を入力してください。を表示する.」 */
printf("2次方程式 ax^2 + bx + c = 0 の係数 a, b, c を入力してください。\n"); 

/* キーボードでa, b, cを入力する. */
printf("a = ");
scanf("%lf",&a);
printf("b = ");
scanf("%lf",&b);
printf("c = ");
scanf("%lf",&c);

if (a == 0){			
	if(b == 0){
		if(c == 0) { printf("不定。"); }	/* a = b = c = 0の場合、「不定。」を表示する. */
		else { printf("不能。"); } 		/* a = b = 0, c ≠ 0の場合、「不能。」を表示する. */
			}
	else {
		printf("x = %0.6lf", x = -(c/b));	/* a = 0, b ≠ 0, c ≠ 0の場合、xの値を表示する. */
			}
		}
else{
	D = (b * b) - 4 * a * c ;			/*　判別式 */
	/* 判別式 D > 0 の場合, 2次方程式の根を計算する */
	if (D > 0){
		printf("x1 = %0.6lf\n", x1 = (-b + sqrt(D)) / (2 * a));
		printf("x2 = %0.6lf", x2 = (-b - sqrt(D)) / (2 * a));
			}
	/* 判別式 D = 0 の場合, 2次方程式の根を計算する */
	else if (D == 0) {
		printf("x = %0.6lf", x = -(b/2*a));
			}
	/* 判別式 D < 0 の場合, 2次方程式の根を計算する */
	else {
		printf("x1 = %0.6lf + %0.6lf i\n", x1 = -b / (2.0 * a),sqrt(-D) / (2 * a));
		printf("x2 = %0.6lf - %0.6lf i", x2 = -b / (2.0 * a), sqrt(-D) / (2 * a));
			}
		}
	return 0;				/* 0 を戻してmain関数を終了する. */
}



