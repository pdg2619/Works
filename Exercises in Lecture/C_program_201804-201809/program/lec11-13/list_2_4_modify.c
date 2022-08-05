#include <stdio.h>    /* printf関数, scanf関数を利用するためにインクルードする. */

void reverse_sign_print(int n)    /* 整数nの符号を反転した整数を表示して値を戻さない関数. */
{
    printf("符号を反転した整数は%dです。\n", -n);    /* 整数nの符号を反転した整数を表示する. */
}

int main(void)    /* main関数を開始する. */
{
    int n;    /* int型の変数nを宣言する. */

    printf("整数を入力してください：");    /* 整数の入力を促す. */
    scanf("%d", &n);    /* キーボードから整数を読み込む. */

    reverse_sign_print(n);    /* 関数reverse_sign_printを呼び出し, 引数としてnを渡す. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
