#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

#define NUM_MATRIX_ROW       6    /* 定数マクロNUM_MATRIX_ROWを6で定義する. */
#define NUM_MATRIX_COLUMN    6    /* 定数マクロNUM_MATRIX_COLUMNを6で定義する. */

int main(void)    /* main関数を開始する. */
{
    /* int型の変数i, j, 及びint型の二次元配列a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]を宣言する. */
    int i, j, mat_i[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN], mat_z[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN];

    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* 初期条件:i = 0, 反復条件:i < NUM_MATRIX_ROW, 更新処理:i++としてfor文を実行する. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* 初期条件:j = 0, 反復条件:j < NUM_MATRIX_COLUMN, 更新処理:j++としてfor文を実行する. */
            mat_z[i][j] = 0;    /* mat_z[i][j]に0を代入する. */
            mat_i[i][j] = 0;    /* mat_i[i][j]に0を代入する. */
        }
        mat_i[i][i] = 1;    /* mat_i[i][i]に1を代入する. */
    }

    printf("Identity Matrix E\n");    /* Identity Matrix Eと表示する. */
    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* 初期条件:i = 0, 反復条件:i < NUM_MATRIX_ROW, 更新処理:i++としてfor文を実行する. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* 初期条件:j = 0, 反復条件:j < NUM_MATRIX_COLUMN, 更新処理:j++としてfor文を実行する. */
            printf("%2d  ", mat_i[i][j]);    /* mat_i[i][j]の値を表示する. */
        }
        printf("\n");    /* 表示の改行を行う. */
    }

    printf("\n");    /* 表示の改行を行う. */

    printf("Zero Matrix O\n");    /* Zero Matrix Oと表示する. */
    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* 初期条件:i = 0, 反復条件:i < NUM_MATRIX_ROW, 更新処理:i++としてfor文を実行する. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* 初期条件:j = 0, 反復条件:j < NUM_MATRIX_COLUMN, 更新処理:j++としてfor文を実行する. */
            printf("%2d  ", mat_z[i][j]);    /* mat_z[i][j]の値を表示する. */
        }
        printf("\n");    /* 表示の改行を行う. */
    }

    return (0);    /* 0を戻してmain関数を終了する. */
}
