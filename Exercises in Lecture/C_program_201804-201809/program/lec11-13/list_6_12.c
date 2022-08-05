#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

void set_zero_array(int a[], int n)    /* int型で要素数nの配列a[n]の各要素に0を代入し, 値を戻さない関数. */
{
    int i;    /* int型の変数iを宣言する. */

    for ( i = 0; i < n; i++ ) {    /* 初期条件:i = 0, 反復条件:i < n, 更新処理:i++としてfor文を実行する. */
        a[i] = 0;    /* a[i]に0を代入する. */
    }
}

void print_array(const int a[], int n)    /* int型で要素数nの配列a[n]の各要素の値を表示し, 値を戻さない関数. */
{
    int i;    /* int型の変数iを宣言する. */

    printf("{ ");    /* 中括弧{とスペースを表示する. */
    for ( i = 0; i < n; i++ ) {    /* 初期条件:i = 0, 反復条件:i < n, 更新処理:i++としてfor文を実行する. */
        printf("%d ", a[i]);    /* a[i]の値を表示する. */
    }
    printf("}");    /* 中括弧}を表示する. */
}

int main(void)    /* main関数を開始する. */
{
    int ary1[] = {1, 2, 3, 4, 5}, ary2[] = {3, 2, 1};    /* int型の配列ary1[], ary2[]を宣言し, それぞれ{1, 2, 3, 4, 5}, {3, 2, 1}で初期化する. */

    printf("ary1 = "); print_array(ary1, 5); printf("\n");    /* ary1 = と表示した後, ary1の各要素を表示して, 表示の改行を行う. */
    printf("ary2 = "); print_array(ary2, 3); printf("\n");    /* ary2 = と表示した後, ary2の各要素を表示して, 表示の改行を行う. */

    set_zero_array(ary1, 5);    /* ary1, 5を引数として渡し,関数set_zero_arrayを呼び出す. */
    set_zero_array(ary2, 3);    /* ary2, 3を引数として渡し,関数set_zero_arrayを呼び出す. */

    printf("両配列の全要素に0を代入しました。\n");    /* 両配列の全要素に0を代入した旨を表示する. */

    printf("ary1 = "); print_array(ary1, 5); printf("\n");    /* ary1 = と表示した後, ary1の各要素を表示して, 表示の改行を行う. */
    printf("ary2 = "); print_array(ary2, 3); printf("\n");    /* ary2 = と表示した後, ary2の各要素を表示して, 表示の改行を行う. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
