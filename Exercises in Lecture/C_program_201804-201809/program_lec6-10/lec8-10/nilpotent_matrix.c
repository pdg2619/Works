#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

#define NUM_MATRIX_ROW       2    /* 定数マクロNUM_MATRIX_ROWを6で定義する. */
#define NUM_MATRIX_COLUMN    2    /* 定数マクロNUM_MATRIX_COLUMNを6で定義する. */

int main(void)    /* main関数を開始する. */
{
    int i, j;    /* int型の変数i, jを宣言する. */
    int a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = { {0, 0}, {3, 0} };    /* int型の二次元配列a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]を宣言し, { {0, 0}, {3, 0} }で初期化する. */
    int b[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = { {1, 1}, {-1, -1} };    /* int型の二次元配列b[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]を宣言し, { {1, 1}, {-1, -1} }で初期化する. */
    int c[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = { {0} };    /* int型の二次元配列c[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]を宣言し, { {0} }で初期化する. */
    int d[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = { {0} };    /* int型の二次元配列d[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]を宣言し, { {0} }で初期化する. */

    printf("Matrix A^2\n");    /* Matrix A^2と表示する. */
    c[0][0] = a[0][0]*a[0][0] + a[0][1]*a[1][0];    /* a[0][0]*a[0][0] + a[0][1]*a[1][0]を計算し, c[0][0]に代入する. */
    c[0][1] = a[0][0]*a[0][1] + a[0][1]*a[1][1];    /* a[0][0]*a[0][1] + a[0][1]*a[1][1]を計算し, c[0][1]に代入する. */
    c[1][0] = a[1][0]*a[0][0] + a[1][1]*a[1][0];    /* a[1][0]*a[0][0] + a[1][1]*a[1][0]を計算し, c[1][0]に代入する. */
    c[1][1] = a[1][0]*a[0][1] + a[1][1]*a[1][1];    /* a[1][0]*a[0][1] + a[1][1]*a[1][1]を計算し, c[1][1]に代入する. */

    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* 初期条件:i = 0, 反復条件:i < NUM_MATRIX_ROW, 更新処理:i++としてfor文を実行する. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* 初期条件:j = 0, 反復条件:j < NUM_MATRIX_COLUMN, 更新処理:j++としてfor文を実行する. */
            printf("%2d  ", c[i][j]);    /* c[i][j]の値とスペースを表示する. */
        }
        printf("\n");    /* 表示の改行を行う. */
    }

    printf("\n");    /* 表示の改行を行う. */

    printf("Matrix B^2\n");    /* Matrix B^2と表示する. */
    d[0][0] = b[0][0]*b[0][0] + b[0][1]*b[1][0];    /* b[0][0]*b[0][0] + b[0][1]*b[1][0]を計算し, d[0][0]に代入する. */
    d[0][1] = b[0][0]*b[0][1] + b[0][1]*b[1][1];    /* b[0][0]*b[0][1] + b[0][1]*b[1][1]を計算し, d[0][1]に代入する. */
    d[1][0] = b[1][0]*b[0][0] + b[1][1]*b[1][0];    /* b[1][0]*b[0][0] + b[1][1]*b[1][0]を計算し, d[1][0]に代入する. */
    d[1][1] = b[1][0]*b[0][1] + b[1][1]*b[1][1];    /* b[1][0]*b[0][1] + b[1][1]*b[1][1]を計算し, d[1][1]に代入する. */

    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* 初期条件:i = 0, 反復条件:i < NUM_MATRIX_ROW, 更新処理:i++としてfor文を実行する. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* 初期条件:j = 0, 反復条件:j < NUM_MATRIX_COLUMN, 更新処理:j++としてfor文を実行する. */
            printf("%2d  ", d[i][j]);    /* d[i][j]の値とスペースを表示する. */
        }
        printf("\n");    /* 表示の改行を行う. */
    }

    return (0);    /* 0を戻してmain関数を終了する. */
}
