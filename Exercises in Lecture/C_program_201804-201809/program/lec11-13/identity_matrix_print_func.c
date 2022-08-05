#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

#define NUM_MATRIX_ROW       6    /* 定数マクロNUM_MATRIX_ROWを6で定義する. */
#define NUM_MATRIX_COLUMN    6    /* 定数マクロNUM_MATRIX_COLUMNを6で定義する. */

void id_mat_set(int a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN])    /* int型の二次元配列a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]に単位行列を代入し, 値を戻さない関数. */
{
    int i, j;    /* int型の変数i, jを宣言する. */

    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* 初期条件:i = 0, 反復条件:i < NUM_MATRIX_ROW, 更新処理:i++としてfor文を実行する. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* 初期条件:j = 0, 反復条件:j < NUM_MATRIX_COLUMN, 更新処理:j++としてfor文を実行する. */
            a[i][j] = 0;    /* a[i][j]に0を代入する. */
        }
        a[i][i] = 1;    /* a[i][i]に1を代入する. */
    }
}

int main(void)    /* main関数を開始する. */
{
    int i, j, mat_i[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN];    /* int型の変数i, j, 及びint型の二次元配列mat_i[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]を宣言する. */

    id_mat_set(mat_i);    /* mat_iを引数として渡し, 関数id_mat_setを呼び出す. */

    printf("Identity Matrix E\n");    /* Identity Matrix Eと表示する. */
    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* 初期条件:i = 0, 反復条件:i < NUM_MATRIX_ROW, 更新処理:i++としてfor文を実行する. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* 初期条件:j = 0, 反復条件:j < NUM_MATRIX_COLUMN, 更新処理:j++としてfor文を実行する. */
            printf("%2d  ", mat_i[i][j]);    /* mat_i[i][j]の値を表示する. */
        }
        printf("\n");    /* 表示の改行を行う. */
    }

    return (0);    /* 0を戻してmain関数を終了する. */
}
