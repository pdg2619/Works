#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

#define NUM_ARITH_SEQ 11    /* 定数マクロNUM_ARITH_SEQを11で定義する. */

int main(void)    /* main関数を開始する. */
{
    int i, sum = 0, x[NUM_ARITH_SEQ];    /* int型の変数i, sumを宣言し, sumを0で初期化する. また, int型の配列x[NUM_ARITH_SEQ]を宣言する. */

    for ( i = 0; i < NUM_ARITH_SEQ; i++ ) {    /* 初期条件:i = 0, 反復条件:i < NUM_ARITH_SEQ, 更新処理:i++としてfor文を実行する. */
        x[i] = 3 + i*2;    /* 等差数列の第n項a_n = a + dnの値をx[i]に代入する. */
        printf("%2d番目の数列は%dです。\n", i, x[i]);    /* 等差数列の第n項a_n = a + dnの値を表示する. */
        sum += x[i];    /* 等差数列a_n = a + dnの初項a_0から第i項までの和を計算し, その値をsumに代入する. */
    }

    printf("この数列の総和は%dです。\n", sum);    /* 等差数列a_n = a + dnの初項a_0から第(NUM_ARITH_SEQ - 1)項までの和を表示する. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
