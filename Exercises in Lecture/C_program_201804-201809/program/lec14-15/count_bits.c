#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

unsigned short int count_bits_int16(void)    /* unsigned short int型のビット長を計算する関数. */
{
    unsigned short int x = 1, bits = 1;    /* unsigned short int型の変数x, bitsを宣言し, x, bitsをそれぞれ1で初期化する. */

    while ( ( x != 0 ) ) {    /* xが0でない間, while文を実行する. */
        x <<= 1;    /* xを1ビットだけ左シフトする. */
        if ( ( x != 0 ) ) {    /* xが0でない場合には以下の中括弧で囲まれた部分の処理を行う. */
            bits++;    /* bits + 1を計算し, bitsに代入する. */
        }
    }

    return (bits);    /* bitsの値を戻して関数count_bits_int16を終了する. */
}

unsigned int count_bits_int32(void)    /* unsigned int型のビット長を計算する関数. */
{
    unsigned int x = 1, bits = 1;    /* unsigned int型の変数x, bitsを宣言し, x, bitsをそれぞれ1で初期化する. */

    while ( ( x != 0 ) ) {    /* xが0でない間, while文を実行する. */
        x <<= 1;    /* xを1ビットだけ左シフトする. */
        if ( ( x != 0 ) ) {    /* xが0でない場合には以下の中括弧で囲まれた部分の処理を行う. */
            bits++;    /* bits + 1を計算し, bitsに代入する. */
        }
    }

    return (bits);    /* bitsの値を戻して関数count_bits_int32を終了する. */
}

unsigned long int count_bits_int64(void)    /* unsigned long int型のビット長を計算する関数. */
{
    unsigned long int x = 1, bits = 1;    /* unsigned long int型の変数x, bitsを宣言し, x, bitsをそれぞれ1で初期化する. */

    while ( ( x != 0 ) ) {    /* xが0でない間, while文を実行する. */
        x <<= 1;    /* xを1ビットだけ左シフトする. */
        if ( ( x != 0 ) ) {    /* xが0でない場合には以下の中括弧で囲まれた部分の処理を行う. */
            bits++;    /* bits + 1を計算し, bitsに代入する. */
        }
    }

    return (bits);    /* bitsの値を戻して関数count_bits_int64を終了する. */
}

int main(void)    /* main関数を開始する. */
{
    printf("unsigned short int型は%2dビットです。\n", count_bits_int16());    /* unsigned short int型のビット長を表示する. */
    printf("unsigned int型は%2dビットです。\n", count_bits_int32());    /* unsigned int型のビット長を表示する. */
    printf("unsigned long int型は%2luビットです。\n", count_bits_int64());    /* unsigned long int型のビット長を表示する. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
