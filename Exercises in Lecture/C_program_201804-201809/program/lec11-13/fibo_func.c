#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

#define MAX_NUM_FIBONACCI    60    /* 定数マクロMAX_NUM_FIBONACCIを60で定義する. このプログラムで対象とするフィボナッチ数F_nの添え字を表す. */

unsigned long int Fibonacci_compute(unsigned long int n)    /* unsigned long int型の非負整数nに対し, n番目のフィボナッチ数F_nを計算し, その値を戻す関数. */
{
    unsigned long int i, rv, tmp1, tmp2;    /* unsigned long int型の変数i, rv, tmp1, tmp2を宣言する. */

    if ( n < 2 ) {    /* n < 2を満たす場合には以下の中括弧で囲まれた部分の処理を行う. n < 2の場合, フィボナッチ数F_n = 1である. */
        return (1);    /* 1を戻して本関数を終了する. */
    }

   else {    /* n >= 2を満たす場合には以下の中括弧で囲まれた部分の処理を行う. n >= 2ならばフィボナッチ数列の3項間漸化式を用いてn番目のフィボナッチ数を計算する. */
        tmp1 = 1; tmp2 = 1;    /* tmp1, tmp2にそれぞれ1を代入する. */
        for ( i = 2; i <= n; i++ ) {    /* 初期条件:i = 2, 反復条件:i <= n, 更新処理:i++としてfor文を実行する. */
            rv = tmp1 + tmp2;    /* tmp1 + tmp2を計算し, その結果をrvに代入する. */
            tmp2 = tmp1;    /* tmp1の値をtmp2に代入する. */
            tmp1 = rv;    /* rvの値をtmp1に代入する. */
        }

        return (rv);    /* rvを戻して本関数を終了する. */
    }
}

int main(void)    /* main関数を開始する. */
{
    unsigned long int i;    /* unsigned long int型の変数iを宣言する. */

    for ( i = 0; i <= MAX_NUM_FIBONACCI; i++ ) {    /* 初期条件:i = 0, 反復条件:i <= MAX_NUM_FIBONACCI, 更新処理:i++としてfor文を実行する. */
        if ( i < MAX_NUM_FIBONACCI ) {    /* i < MAX_NUM_FIBONACCIを満たす場合には以下の中括弧で囲まれた部分の処理を行う. */
            printf("%4lu, ", Fibonacci_compute(i) );    /* iを引数として渡し, 関数Fibonacci_computeを呼び出し, その戻り値, カンマ, スペースを表示する. */
        }

        else {    /* i >= MAX_NUM_FIBONACCIを満たす場合には以下の中括弧で囲まれた部分の処理を行う. */
            printf("%4lu\n", Fibonacci_compute(i) );    /* iを引数として渡し, 関数Fibonacci_computeを呼び出し, その戻り値を表示した後, 表示の改行を行う. */
        }
    }

    return (0);    /* 0を戻してmain関数を終了する. */
}
