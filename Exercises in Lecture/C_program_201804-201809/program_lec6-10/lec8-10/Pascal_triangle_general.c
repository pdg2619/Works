#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

#define NUM_STEPS    15    /* 定数マクロNUM_STEPSを15で定義する. 表示したいパスカルの三角形の行数を表す. */

int main(void)
{
    int a[NUM_STEPS][NUM_STEPS];
    int i, j;

    for ( i = 0; i < NUM_STEPS; i++ ) {    /* 初期条件:i = 0, 反復条件:i < NUM_STEPS, 更新処理:i++としてfor文を実行する. */
        for ( j = 0; j < NUM_STEPS; j++ ) {    /* 初期条件:j = 0, 反復条件:j < NUM_STEPS, 更新処理:j++としてfor文を実行する. */

            if ( j == 0 ) {    /* j = 0を満たす場合には以下の中括弧で囲まれた部分の処理を行う. */
                a[i][j] = 1;    /* a[i][j]に1を代入する. */
            }

            else if ( j == i ) {    /* j ≠ 0かつj = iを満たす場合には以下の中括弧で囲まれた部分の処理を行う. */
                a[i][j] = 1;    /* a[i][j]に1を代入する. */
                break;
            }

            else {    /* j ≠ 0かつj ≠ iを満たす場合には以下の中括弧で囲まれた部分の処理を行う. */
                a[i][j] = a[i-1][j-1] + a[i-1][j];    /* a[i][j]にa[i-1][j-1] + a[i-1][j]を代入する. */
            }

        }
    }

    for ( i = 0; i < NUM_STEPS; i++ ) {    /* 初期条件:i = 0, 反復条件:i < NUM_STEPS, 更新処理:i++としてfor文を実行する. */
        for ( j = 0; j <= i; j++ ) {    /* 初期条件:j = 0, 反復条件:j <= i, 更新処理:j++としてfor文を実行する. */
            printf("%4d ", a[i][j]);    /* a[i][j]の値を表示する. */
        }
        printf("\n");    /* 表示の改行を行う. */
    }

    return (0);    /* 0を戻してmain関数を終了する. */
}
