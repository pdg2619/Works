#include <stdio.h>    /* printf関数を利用するためにインクルードする. */
#include <math.h>    /* pow関数を利用するためにインクルードする. */

int main(void)    /* main関数を開始する. */
{
    int i, sum = 0, x[11];    /* int型の変数i, sumを宣言し, sumを0で初期化する. また, int型の配列x[11]を宣言する. */

    for ( i = 0; i <= 10; i++ ) {    /* 初期条件:i = 0, 反復条件:i <= 10, 更新処理:i++としてfor文を実行する. */
        x[i] = (int) 3*pow( (double) 2, (double) i );    /* 等比数列の第n項a_n = a*r^(n)の値をx[i]に代入する. */
        printf("%2d番目の数列は%4dです。\n", i, x[i]);    /* 等比数列の第n項a_n = a*r^(n)の値を表示する. */
        sum += x[i];    /* 等比数列a_n = a*r^(n)の初項a_0から第i項までの和を計算し, その値をsumに代入する. */
    }

    printf("この数列の総和は%4dです。\n", sum);    /* 等比数列a_n = a*r^(n)の初項a_0から第10項までの和を表示する. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
