#include <stdio.h>    /* printf関数, scanf関数を利用するためにインクルードする. */

int gcd(int x, int y)    /* int型の整数x, yを入力し, xとyの最大公約数gcd(x, y)を計算し, 計算結果を戻す関数. */
{
    int tmp_x = x, tmp_y = y, r;    /* int型の変数tmp_x, tmp_y, rを宣言し, tmp_xをxで, tmp_yをyで初期化する. */

    while ( tmp_y != 0 ) {    /* tmp_yが0と等しくない間, while文を実行する. */
        r = tmp_x%tmp_y;    /* tmp_xをtmp_yで割った剰余を計算し, その結果をrに代入する. */
        tmp_x = tmp_y;    /* tmp_yの値をtmp_xに代入する. */
        tmp_y = r;    /* rの値をtmp_yに代入する. */
    }

    return (tmp_x);    /* tmp_xの値を戻して本関数を終了する. */
}

int lcm(int x, int y)    /* int型の整数x, yを入力し, xとyの最小公約数lcm(x, y)を計算し, 計算結果を戻す関数. */
{
    return ( (x*y)/gcd(x, y) );    /* (x*y)/gcd(x, y)を戻して本関数を終了する. */
}

int main(void)    /* main関数を開始する. */
{
    int a, b, l;    /* int型の変数a, b, lを宣言する. */

    printf("整数Aを入力してください：");    /* 1つ目の整数の入力を促す. */
    scanf("%d", &a);    /* キーボードから1つ目の整数を読み込み, その値をaに代入する. */

    printf("整数Bを入力してください：");    /* 2つ目の整数の入力を促す. */
    scanf("%d", &b);    /* キーボードから2つ目の整数を読み込み, その値をbに代入する. */

    l = lcm(a, b);    /* a, bを引数として渡し,関数lcmを呼び出し, その戻り値をlに代入する. */

    printf("最小公倍数は%dです。\n", l);    /* lの値を表示し, 表示の改行を行う. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
