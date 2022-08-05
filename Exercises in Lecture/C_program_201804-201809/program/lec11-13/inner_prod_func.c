#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

#define DIM_VECTOR    8    /* 定数マクロDIM_VECTORを8で定義する. 実空間R^nの次元nを表す. */

double inner_prod(double a[], double b[], int n)    /* 実空間R^n上の2点a = (a_0, ..., a_(n-1)), b = (b_0, ..., b_(n-1))を配列a[n], b[n]と見なし, 2点の内積を計算し, 計算結果を戻す関数. */
{
    double rv = 0;    /* double型の変数rvを宣言し, 0で初期化する. */
    int i;    /* int型の変数iを宣言する. */

    for ( i = 0; i < n; i++ ) {    /* 初期条件:i = 0, 反復条件:i < n, 更新処理:i++としてfor文を実行する. */
        rv += a[i]*b[i];    /* rv + a[i]*b[i]を計算し, その結果をrvに代入する. */
    }

    return (rv);    /* rvの値を戻して本関数を終了する. */
}

void print_array(const double a[], int n)    /* double型で要素数nの配列a[n]の各要素の値を表示し, 値を戻さない関数. */
{
    int i;    /* int型の変数iを宣言する. */

    printf("{ ");    /* 中括弧{とスペースを表示する. */
    for ( i = 0; i < n; i++ ) {    /* 初期条件:i = 0, 反復条件:i < n, 更新処理:i++としてfor文を実行する. */
        printf("%f ", a[i]);    /* a[i]の値を表示する. */
    }
    printf("}");    /* 中括弧}を表示する. */
}

int main(void)    /* main関数を開始する. */
{
    double sol;    /* double型の変数solを宣言する. */
    double x[DIM_VECTOR] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};    /* double型の配列x[DIM_VECTOR]を宣言し, {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8}で初期化する. */
    double y[DIM_VECTOR] = {2.3, -13.0, 9.8, -4.5, 2.3, 0, -0.03, 0.12625};    /* double型の配列y[DIM_VECTOR]を宣言し, {2.3, -13.0, 9.8, -4.5, 2.3, 0, -0.03, 0.12625}で初期化する. */

    printf("x = "); print_array(x, DIM_VECTOR); printf("\n");    /* x = と表示した後, xの各要素を表示して, 表示の改行を行う. */
    printf("y = "); print_array(y, DIM_VECTOR); printf("\n");    /* y = と表示した後, yの各要素を表示して, 表示の改行を行う. */

    sol = inner_prod(x, y, DIM_VECTOR);    /* x, y, DIM_VECTORを引数として渡し, 関数inner_prodを呼び出し, その戻り値をsolに代入する. */
    printf("内積は%fです。\n", sol);    /* solの値を表示する. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
