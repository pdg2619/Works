#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

int main(void)    /* main関数を開始する. */
{
    int i, n, rv = 0;    /* int型の変数i, n, rvを宣言し, rvを0で初期化する. */

    printf("整数n：");    /* 整数の入力を促す. */
    scanf("%d", &n);    /* キーボードから整数nを読み込む. */

    for ( i = 1; i <= n; i++ ) {    /* 初期条件:i = 1, 反復条件:i <= n, 更新処理:i++としてfor文を実行する. */
        rv += i;    /* rv + iを計算し, 計算結果をrvに代入する. */
    }
    printf("1から%dまでの和は%dです。\n", n, rv);    /* 1 + … + nの値を表示する. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
