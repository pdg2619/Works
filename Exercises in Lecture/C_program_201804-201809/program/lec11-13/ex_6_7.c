#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

void hello(void)    /* 引数を受け取らず, Helloを表示して値を戻さない関数. */
{
    printf("Hello\n");    /* Helloを表示する. */
}

int main(void)    /* main関数を開始する. */
{
    hello();    /* 関数helloを呼び出す. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
