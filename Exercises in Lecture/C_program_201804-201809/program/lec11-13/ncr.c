#include <stdio.h>    /* printf関数, scanf関数を利用するためにインクルードする. */

unsigned long int permutation(unsigned long int n, unsigned long int r)    /* unsigned long int型の非負整数n, rを入力し, 順列nPrを計算し, 計算結果を戻す関数. */
{
    unsigned long int i, rv = 1;    /* unsigned long int型の変数i, rvを宣言し, rvを1で初期化する. */

        for ( i = n; i > ( n - r ); i-- ) {    /* 初期条件:i = n, 反復条件:i > (n - r), 更新処理:i--としてfor文を実行する. */
        rv *= i;    /* rv*iを計算し, その結果をrvに代入する. */
    }

    return (rv);    /* rvの値を戻して本関数を終了する. */
}

unsigned long int factorial(unsigned long int r)    /* unsigned long int型の非負整数rを入力し, rの階乗を計算し, 計算結果を戻す関数. */
{
    unsigned long int i, rv = 1;    /* unsigned long int型の変数i, rvを宣言し, rvを1で初期化する. */

    for ( i = 1; i <= r; i++ ) {    /* 初期条件:i = 1, 反復条件:i <= r, 更新処理:i++としてfor文を実行する. */
        rv *= i;    /* rv*iを計算し, その結果をrvに代入する. */
    }

    return (rv);    /* rvの値を戻して本関数を終了する. */
}

unsigned long int binomial(unsigned long int n, unsigned long int r)    /* unsigned long int型の非負整数rを入力し, 二項係数nCrを計算し, 計算結果を戻す関数. */
{
    return ( permutation(n, r)/factorial(r) );    /* permutation(n, r)/factorial(r)の値を戻して本関数を終了する. */
}

int main(void)    /* main関数を開始する. */
{
    unsigned long int n, r;    /* unsigned long int型の変数n, rを宣言する. */

    printf("二項係数nCrを計算します。正整数n, rを入力してください。\n");    /* 二項係数nCrを計算する旨を表示し, 正整数n, rの入力を促す. */
    printf("n = "); scanf("%lu", &n);    /* n = を表示し, キーボードからnの値を読み込む. */
    printf("r = "); scanf("%lu", &r);    /* r = を表示し, キーボードからrの値を読み込む. */

    printf("nCr = %lu\n", binomial(n, r));    /* n, rを引数として渡し,関数binomialを呼び出し, その戻り値を表示する. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
