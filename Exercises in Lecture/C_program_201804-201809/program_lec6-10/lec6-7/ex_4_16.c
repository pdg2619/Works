#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

int main(void)    /* main関数を開始する. */
{
    int i, n;    /* int型の変数i, nを宣言する. */

    printf("整数：");    /* 整数の入力を促す. */
    scanf("%d", &n);    /* キーボードから整数nを読み込む. */

    for ( i = 1; i <= n; i += 2 ) {    /* 初期条件:i = 1, 反復条件:i <= n, 更新処理:i += 2としてfor文を実行する. */
        printf("%d ", i);    /* i<=nかつiが奇数の場合にiの値(読み込んだ整数n以下の奇数)を表示する. */
    }
    printf("\n");    /* 表示の改行を行う. */

    return (0);    /* 0を戻してmain関数を終了する. */
}