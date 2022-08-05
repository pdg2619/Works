#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

#define NUM_ARRAY    5    /* 定数マクロNUM_ARRAYを5で定義する. */

int max_of(int a[], int n)    /* int型で要素数nの配列a[n]の最大値を戻す関数. */
{
    int i;    /* int型の変数iを宣言する. */
    int max = a[0];    /* int型の変数maxを宣言し, a[0]の値を代入する. */

    for ( i = 0; i < n; i++ ) {    /* 初期条件:i = 0, 反復条件:i < n, 更新処理:i++としてfor文を実行する. */
        if ( ( i > 0 ) && ( a[i] > max ) ) {    /* i > 0またはa[i] > maxを満たす場合には以下の中括弧で囲まれた部分の処理を行う. */
            max = a[i];    /* 配列の要素a[i]の値をmaxに代入する. */
        }
    }

    return (max);    /* maxの値を戻して関数max_ofを終了する. */
}

int min_of(int a[], int n)    /* int型で要素数nの配列a[n]の最小値を戻す関数. */
{
    int i;    /* int型の変数iを宣言する. */
    int min = a[0];    /* int型の変数minを宣言し, a[0]の値を代入する. */

    for ( i = 0; i < n; i++ ) {    /* 初期条件:i = 0, 反復条件:i < n, 更新処理:i++としてfor文を実行する. */
        if ( ( i > 0 ) && ( a[i] < min ) ) {    /* i > 0またはa[i] < minを満たす場合には以下の中括弧で囲まれた部分の処理を行う. */
            min = a[i];    /* 配列の要素a[i]の値をminに代入する. */
        }
    }

    return (min);    /* minの値を戻して関数min_ofを終了する. */
}

int main(void)    /* main関数を開始する. */
{
    int max, min;    /* int型の変数max, minを宣言する. */
    int a[NUM_ARRAY] = {83, 95, 85, 63, 89};    /* int型の配列a[NUM_ARRAY]を宣言し, {83, 95, 85, 63, 89}で初期化する. */

    printf("数列の最大値, 最小値を求めます。\n");    /* 配列a[NUM_ARRAY]を数列と見なし, その数列の各項の中での最大値, 最小値を求める旨を表示する. */

    max = max_of(a, NUM_ARRAY);    /* a, NUM_ARRAYを引数として渡し,関数max_ofを呼び出し, その戻り値をmaxに代入する. */
    min = min_of(a, NUM_ARRAY);    /* a, NUM_ARRAYを引数として渡し,関数min_ofを呼び出し, その戻り値をminに代入する. */

    printf("max = %d, min = %d\n", max, min);    /* max, minの値を表示する. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
