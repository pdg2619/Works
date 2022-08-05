#include <stdio.h>    /* printf関数を利用するためにインクルードする. */
#include <time.h>    /* clock関数を利用するためにインクルードする. */

#define MAX_NUM_FIBONACCI     27    /* 定数マクロMAX_NUM_FIBONACCIを25で定義する. このプログラムで対象とするフィボナッチ数F_nの添え字を表す. */
#define NUM_LOOP           10000    /* 定数マクロNUM_LOOPを10000で定義する. */

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

unsigned long int Fibonacci_compute_recursive(unsigned long int n) /* 非負整数nを入力し, n番目のフィボナッチ数F_nを返す関数 */
{
    if ( n < 2 ) {    /* n < 2を満たす場合には以下の中括弧で囲まれた部分の処理を行う. n < 2の場合, フィボナッチ数F_n = 1である. */
        return (1);    /* 1を戻して本関数を終了する. */
    }

    else {    /* n >= 2を満たす場合には以下の中括弧で囲まれた部分の処理を行う. n >= 2ならばフィボナッチ数列の3項間漸化式を用いてn番目のフィボナッチ数を計算する. */
        return ( Fibonacci_compute_recursive(n-1) + Fibonacci_compute_recursive(n-2) );    /* Fibonacci_compute_recursive(n-1) + Fibonacci_compute_recursive(n-2)を戻して本関数を終了する. */
    }
}

int main(void)    /* main関数を開始する. */
{
    unsigned long int i, m;    /* unsigned long int型の変数i, mを宣言する. */
    clock_t start, end;    /* clock_t型の変数start, endを宣言する. */

    start = clock();    /* clock関数を呼び出し, その戻り値をstartに代入する. */
    for ( m = 0; m < NUM_LOOP; m++ ) {    /* 初期条件:m = 0, 反復条件:m < NUM_LOOP, 更新処理:m++としてfor文を実行する. */
        for ( i = 0; i < MAX_NUM_FIBONACCI; i++ ) {    /* 初期条件:i = 0, 反復条件:i < MAX_NUM_FIBONACCI, 更新処理:i++としてfor文を実行する. */
            Fibonacci_compute(i);    /* iを引数として渡し, 関数Fibonacci_computeを呼び出す. */
        }
    }
    end = clock();    /* clock関数を呼び出し, その戻り値をendに代入する. */
    printf("関数Fibonacci_computeを用いた処理時間: %f秒\n", (double)(end - start) / CLOCKS_PER_SEC);    /* start = clock()とend = clockの間の処理時間(単位:秒)を表示する. */

    start = clock();    /* clock関数を呼び出し, その戻り値をstartに代入する. */
    for ( m = 0; m < NUM_LOOP; m++ ) {    /* 初期条件:m = 0, 反復条件:m < NUM_LOOP, 更新処理:m++としてfor文を実行する. */
        for ( i = 0; i < MAX_NUM_FIBONACCI; i++ ) {    /* 初期条件:i = 0, 反復条件:i < MAX_NUM_FIBONACCI, 更新処理:i++としてfor文を実行する. */
            Fibonacci_compute_recursive(i);    /* iを引数として渡し, 関数Fibonacci_compute_recursiveを呼び出す. */
        }
    }
    end = clock();    /* clock関数を呼び出し, その戻り値をendに代入する. */
    printf("関数Fibonacci_compute_recursiveを用いた処理時間: %f秒\n", (double)(end - start) / CLOCKS_PER_SEC);    /* start = clock()とend = clockの間の処理時間(単位:秒)を表示する. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
