#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

#define NUM_MATRIX_ROW       4    /* 定数マクロNUM_MATRIX_ROWを4で定義する. */
#define NUM_MATRIX_COLUMN    3    /* 定数マクロNUM_MATRIX_COLUMNを3で定義する. */

int main(void)    /* main関数を開始する. */
{
    /* int型の変数i, jを宣言する. */
    /* また, int型の二次元配列a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]を宣言し, { {1, 5, 9}, {2, 6, 10}, {3, 7, 11}, {4, 8, 12} }で初期化する. */
    int i, j, a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN] = { {1, 5, 9}, {2, 6, 10}, {3, 7, 11}, {4, 8, 12} };

    printf("Matrix A\n");    /* Matrix Aと表示する. */
    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* 初期条件:i = 0, 反復条件:i < NUM_MATRIX_ROW, 更新処理:i++としてfor文を実行する. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* 初期条件:j = 0, 反復条件:j < NUM_MATRIX_COLUMN, 更新処理:j++としてfor文を実行する. */
            printf("%2d  ", a[i][j]);    /* 二次元配列の要素a[i][j]の値を表示する. */
        }
        printf("\n");    /* 表示の改行を行う. */
    }

    return (0);    /* 0を戻してmain関数を終了する. */
}
