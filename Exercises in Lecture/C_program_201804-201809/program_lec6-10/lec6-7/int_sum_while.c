#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

int main(void)    /* main関数を開始する. */
{
    int i = 1;    /* int型の変数iを宣言し, 1で初期化する. */
    int sum = 0;    /* int型の変数sumを宣言し, 0で初期化する. */

    while ( i <= 10 ) {    /* iが10以下である間, while文を実行する. */
        sum += i;    /* sum + iを計算し, 計算結果をsumに代入する. */
        i++;    /* i + 1を計算し, 計算結果をiに代入する. */
    }

    printf("%d\n", sum);    /* sumを表示する. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
