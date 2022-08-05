#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

int main(void)    /* main関数を開始する. */
{
    int i;    /* int型の変数iを宣言する. */
    int sum = 0;    /* int型の変数sumを宣言し, 0で初期化する. */

    for ( i = 1; i <= 10; i++ ) {    /* 初期条件:i = 1, 反復条件:i <= 10, 更新処理:i++としてfor文を実行する. */
        sum += i;    /* sum + iを計算し, 計算結果をsumに代入する. */
    }

    printf("%d\n", sum);    /* sumを表示する. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
