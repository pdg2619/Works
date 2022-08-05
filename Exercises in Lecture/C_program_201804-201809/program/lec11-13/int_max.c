#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

int max(int a, int b)    /* 整数a, bのうち最小でない方の整数の値を戻す関数. */
{
    if ( a > b ) {    /* a > bの場合には以下の中括弧で囲まれた部分の処理を行う. */
        return (a);    /* aを戻して本関数を終了する. */
    }

    else {    /* a <= bの場合には以下の中括弧で囲まれた部分の処理を行う. */
        return (b);    /* bを戻して本関数を終了する. */
    }
}

int main(void)    /* main関数を開始する. */
{
    int x = 45, y = 83;    /* int型の変数x, yを宣言し, それぞれ45, 83を代入する. */
    printf("整数1：%2d, 整数2：%2d\n", x, y);    /* xを整数1, yを整数2として表示する. */

    printf("大きい方の整数は%2dです。\n", max(x, y));    /* 関数maxを呼び出して最小でない方の整数を計算し, その戻り値を表示する. */

    return (0);    /* 0を戻してmain関数を終了する. */
}