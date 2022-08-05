#include <stdio.h>    /* printf関数, scanf関数を利用するためにインクルードする. */

#define NUM_CHECK_COLLATZ    80    /* 定数マクロNUM_CHECK_COLLATZを80で定義する. コラッツ列を計算する整数の上限を表す. */

unsigned long int Collatz_seq_compute(const unsigned long int n)    /* unsigned long int型の整数nに対するコラッツ列を計算し, コラッツ列が1に辿り着くまでのコラッツ列を表示し, コラッツ操作の回数countを戻す関数. */
{
    unsigned long int rv;    /* unsigned long int型の変数rvを宣言する. 入力された整数nに対し, コラッツの手続き後の整数を格納する変数. */
    unsigned long int count = 0;    /* unsigned long int型の変数countを宣言し, 0で初期化する. コラッツの手続きの回数を格納する変数. */

    rv = n;    /* rvにnを代入する. */

    printf("%lu", rv);    /* rvの値を表示する. */

    while ( rv != 1 ) {    /* rvが1と等しくない間, while文を実行する. */
        if ( ( rv % 2 ) == 0 ) {    /* rvが偶数の場合には以下の中括弧で囲まれた部分の処理を行う. */
            rv /= 2;    /* rv/2を計算し, その結果をrvに代入する. */
        }

        else {    /* rvが奇数の場合には以下の中括弧で囲まれた部分の処理を行う. */
            rv = 3*rv + 1;    /* 3*rv + 1を計算し, その結果をrvに代入する. */
        }

        count++;    /* コラッツの手続きの回数を1カウントする. */

        printf("→%lu", rv);    /* 矢印→とコラッツの手続き後の整数rvを表示する. */
    }

    printf("\n\n");    /* 表示を見やすくするため, 計算終了後に表示の改行を行う. */

    return (count);    /* countの値を戻して本関数を終了する. */
}

void array_max(unsigned long int a[], unsigned long int n, unsigned long int b[])    /* 要素数nのint型の配列a[n]の最大値をb[0]に格納し, そのときの添え字をb[1]に格納して値を戻さない関数. */
{
    unsigned long int i;    /* unsigned int型の変数iを宣言する. */

    b[0] = a[0];    /* b[0]にa[0]を代入する. */

    for ( i = 1; i < n; i++ ) {    /* 初期条件:i = 1, 反復条件:i < n, 更新処理:i++としてfor文を実行する. */
        if ( a[i] > b[0] ) {    /* a[i] > b[0]を満たす場合には以下の中括弧で囲まれた部分の処理を行う. */
            b[1] = (i + 1);    /* b[1]にi+1を代入する. 整数(i+1)に対するコラッツ列の個数をa[i]に格納している為, 1を加えている. */
            b[0] = a[i];    /* b[0]にa[i]を代入する. */
        }
    }
}

int main(void)    /* main関数を開始する. */
{
    unsigned long int i;    /* unsigned long int型の変数i, max, indexを宣言する. */
    unsigned long int count[NUM_CHECK_COLLATZ] = {0}, max[2] = {0};    /* unsigned long int型の配列count[NUM_CHECK_COLLATZ]を宣言し, {0}で初期化する. */

    for ( i = 1; i <= NUM_CHECK_COLLATZ; i++ ) {    /* 初期条件:i = 1, 反復条件:i <= NUM_CHECK_COLLATZ, 更新処理:i++としてfor文を実行する. */
        count[i-1] = Collatz_seq_compute(i);    /* iを引数として渡して関数Collatz_seq_computeを呼び出し, その戻り値をcount[i-1]に代入する. */
    }
    printf("\n");    /* 表示の改行を行う. */

    array_max(count, NUM_CHECK_COLLATZ, max);    /* count, NUM_CHECK_COLLATZ, maxを引数として渡して関数array_maxを呼び出す. */
    printf("index = %lu, max length = %lu\n", max[1], max[0]);    /* max[1], max[0]の値を表示する. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
