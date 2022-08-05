#include <stdio.h>    /* printf関数を利用するためにインクルードする. */

/* 以下の定数マクロSIZE_OVERは, 最大の素数を65521にするか, 65537にするか, を切り替える定数マクロ. */
/* 最大の素数を65521にする場合には, 何も変更せずにプログラムをコンパイルし, 実行すればよい. */
/* 最大の素数を65537にする場合には, 以下の定数マクロの定義「#define SIZE_OVER」の前後にあるコメント開始/終了の2箇所を削除してからプログラムをコンパイルし, 実行すること. */

/* #define SIZE_OVER */
#ifdef SIZE_OVER
    #define MAX_PRIME    65537    /* 次課題で計算する最大の素数 */
#else
    #define MAX_PRIME    65521    /* 本課題で計算する最大の素数 */
#endif

int main(void)    /* main関数を開始する. */
{
    unsigned int i, n;    /* unsigned int型の変数i, nの宣言. n: 素数か否かの判定対象の整数, i: nより小さい整数 */
    unsigned short int primes[MAX_PRIME] = {0};    /* unsigned short int型の配列primes[MAX_PRIME]を宣言し, {0}で初期化する. 素数を格納する配列として使用 */
    unsigned int ptr1 = 0;    /* unsigned int型の変数ptr1を宣言し, 0で初期化する. 素数p[i]の添え字iを表す変数として使用する. */
    unsigned int ptr2 = 0;    /* unsigned int型の変数ptr2を宣言し, 0で初期化する. primes[ptr2]*primes[ptr2] < nなる最大の素数p[i]の添え字iを表す変数として使用する. */

    primes[ptr1++] = 2;    /* primes[0]に2を代入する. p_0に0番目の素数2を代入する */
    primes[ptr1++] = 3;    /* primes[1]に3を代入する. p_1に0番目の素数3を代入する */

    for ( n = 5; n <= MAX_PRIME; n += 2 ) {    /* 初期条件:n = 5, 反復条件:n <= MAX_PRIME, 更新処理:n += 2としてfor文を実行する. 整数nとして, 5以上MAX_PRIME以下の奇数のみを対象とすることを意味する. */
        while ( n >= ( primes[ptr2]*primes[ptr2] ) ) {    /* nがprimes[ptr2]*primes[ptr2]以上である間, while文を実行する. */
                ptr2++;    /* ptr2にptr2 + 1を代入する. このwhile文でprimes[ptr2]*primes[ptr2] < nなる最大のptr2を探している. */
        }
        ptr2--;    /* ptr2にptr2 - 1を代入する. このwhile文を抜けたとき, ptr2にはprimes[ptr2]*primes[ptr2] >= nなる最小のptr2が代入されているので, ptr2がprimes[ptr2]*primes[ptr2] < nなる最大のptr2となるように1を引く. */

        for ( i = 0; i <= ptr2; i++ ) {    /* 初期条件:i = 0, 反復条件:i <= ptr2, 更新処理:i++としてfor文を実行する. */
            if ( ( n % primes[i] ) == 0 ) {    /* nがprimes[i]で割り切れる場合には以下の中括弧で囲まれた部分の処理を行う. */
                break;    /* 内側のforループ(変数iのfor文)を抜け出る. このif文の中括弧で囲まれた部分の処理を行うのは, nがprimes[i]で割り切れる場合に限る. */
            }
        }

        i--;    /* iにi - 1を代入する. 上記の(変数iの)for文を抜けたとき, ptr2にはprimes[ptr2]*primes[ptr2] >= nなる最小のptr2が代入されているので, ptr2がprimes[ptr2]*primes[ptr2] < nなる最大のptr2とするために1を引く. */
        if ( ptr2 == i ) {    /* n = iが成り立つ場合には以下の中括弧で囲まれた部分の処理を行う. */
            primes[ptr1++] = n;    /* primes[ptr1]にnを代入した後, ptr1 + 1をptr1に代入する(後置増分演算子). このif文の中括弧で囲まれた部分の処理を行うのはptr2 = iの場合である. つまりnが1からfloor(sqrt(n))で割り切れない(つまりnが素数である)場合に限る. */
        }
    }

    /* 上記の2重ループ(for文 + while文)が終了すると, primes[0], ..., primes[ptr1-1]にptr1個の素数が既に代入されており, primes[ptr1], primes[ptr1+1], ...には素数は代入されていない. */

    for ( i = 0; i < ptr1; i++ ) {    /* 初期条件:i = 0, 反復条件:i < ptr1, 更新処理:i++としてfor文を実行する. */
        printf("%5d, ", primes[i]);    /* primes[i]の値を表示する. これは(i + 1)番目に小さい素数である. */
    }
    printf("\n");    /* 表示の改行を行う. */

    printf("素数の個数 = %d\n", ptr1);    /* ptr1の値を表示する. primes[0], ..., primes[ptr1-1]にptr1個の素数が代入されているので, 素数の個数はptr1個である. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
