#include <stdio.h>    /* printf関数を利用するためにインクルードする. */
#include <math.h>    /* log関数を利用するためにインクルードする. */

long double ComputeEulerConst(unsigned long int n)    /* unsigned long int型の正整数nに対し, {1 + (1/2) + ... + (1/n)} - log_{e} nを計算し, その値を戻す関数. */
{
    long double rv = 0;    /* long double型の変数rvを宣言し, 0で初期化する. */
    unsigned long int i;    /* unsigned long int型の変数iを宣言する. */

    for ( i = 1; i <= n; i++ ) {    /* 初期条件:i = 1, 反復条件:i <= n, 更新処理:i++としてfor文を実行する. */
        rv += ( (long double) ( (long double) 1 )/( (long double) i ) );    /* rv + ( (long double) ( (long double) 1 )/( (long double) i ) )を計算し, その結果をrvに代入する. */
    }

    /* 上記のfor文の計算が完了すると, rvには1 + (1/2) + ... + (1/n)の近似値が格納されている. */

    rv -= ( (long double) log( (long double) n ) );    /* rv - ( (long double) log( (long double) n ) )を計算し, その結果をrvに代入する. */

    return (rv);    /* rvを戻して本関数を終了する. */
}

int main(void)    /* main関数を開始する. */
{
    unsigned long int n;    /* unsigned long int型の変数nを宣言する. */

    printf("数列a_nの値を計算します。正整数nを入力してください。");    /* 数列a_n = {1 + (1/2) + ... + (1/n)} - log_{e} nの値を計算する旨を表示し, 正整数nの入力を促す. */
    printf("正整数n：");  scanf("%lu", &n);    /* 正整数n：と表示し, キーボードから正整数を読み込み, その値をnに代入する. */

    printf("a_nの値は%Lfです。\n", ComputeEulerConst(n));    /* nを引数として渡し, 関数ComputeEulerConstを呼び出し, その戻り値を表示する. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
