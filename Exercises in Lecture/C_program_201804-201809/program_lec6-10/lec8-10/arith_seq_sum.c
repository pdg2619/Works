#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

int main(void)    /* main関数を開始する. */
{
    int a, d, i, sum;    /* int型の変数a, d, i, sumを宣言する. */
    sum = 0;    /* 変数sumに0を代入する. */
    a = 3;    /* 変数aに3を代入する. */
    d = 2;    /* 変数dに2を代入する. */

    for ( i = 0; i <= 10; i++ ) {    /* 初期条件:i = 0, 反復条件:i <= 10, 更新処理:i++としてfor文を実行する. */
        printf("%2d番目の数列は%dです。\n", i, a + i*d);    /* 等差数列の第n項a_n = a + dnの値を表示する. */
        sum += (a + i*d);    /* 等差数列a_n = a + dnの初項a_0から第i項までの和を計算し, その値をsumに代入する. */
    }

    printf("この数列の総和は%dです。\n", sum);    /* 等差数列a_n = a + dnの初項a_0から第10項までの和を表示する. */

    return (0);    /* 0を戻してmain関数を終了する. */
}