#include <stdio.h>    /* printf関数, scanf関数を利用するためにインクルードする. */

unsigned long int mod_pow_p_1(unsigned long int a, unsigned long int p)    /* unsigned long int型の非負整数a, pに対し, a^(p-1) mod pを計算し, その結果を戻す関数. */
{
    unsigned long int i, rv = 1;    /* unsigned long int型の変数i, rvを宣言し, rvを1で初期化する. */

    for ( i = 1; i <= p - 1; i++ ) {    /* 初期条件:i = 1, 反復条件:i <= p - 1, 更新処理:i++としてfor文を実行する. */
        rv = ( rv*a )%p;    /* (rv*a)%pを計算し, その結果をrvに代入する. */
    }

    return (rv);    /* rvの値を戻す. */
}

unsigned long int gcd(unsigned long int x, unsigned long int y)    /* unsigned long int型の整数x, yを入力し, xとyの最大公約数gcd(x, y)を計算し, 計算結果を戻す関数. */
{
    unsigned long int tmp_x = x, tmp_y = y, r;    /* unsigned long int型の変数tmp_x, tmp_y, rを宣言し, tmp_xをxで, tmp_yをyで初期化する. */

    while ( tmp_y != 0 ) {    /* tmp_yが0と等しくない間, while文を実行する. */
        r = tmp_x%tmp_y;    /* tmp_xをtmp_yで割った剰余を計算し, その結果をrに代入する. */
        tmp_x = tmp_y;    /* tmp_yの値をtmp_xに代入する. */
        tmp_y = r;    /* rの値をtmp_yに代入する. */
    }

    return (tmp_x);    /* tmp_xの値を戻して本関数を終了する. */
}

int main(void)    /* main関数を開始する. */
{
    unsigned long int a, p;    /* unsigned long int型の変数a, pを宣言する. */

    printf("gcd(a, p) = 1なる整数a, 素数pを入力します。\n\n");    /* 整数a, 素数pをキーボードから入力する必要がある旨を表示する. */
    printf("整数aを入力してください：");    /* 整数aの入力を促す. */
    scanf("%lu", &a);    /* キーボードから整数aを読み込み, その値をaに代入する. */

    printf("素数pを入力してください：");    /* 素数pの入力を促す. */
    scanf("%lu", &p);    /* キーボードから素数pを読み込み, その値をpに代入する. */

    printf("a = %lu, p = %lu, ", a, p);    /* 整数a, 素数pの値を表示する. */

    if ( gcd(a, p) != 1 ) {    /* gcd(a, p)が1と等しくない場合には以下の中括弧で囲まれた部分の処理を行う. */
        printf("gcd(a, p) = 1ではありません。\n");    /* gcd(a, p)が1でない旨を表示する. */
    }

    else {    /* gcd(a, p) = 1の場合には以下の中括弧で囲まれた部分の処理を行う. */
        printf("a^(p-1) mod p = %lu\n", mod_pow_p_1(a, p) );    /* a, pを引数として渡し, 関数mod_pow_p_1を呼び出し, その戻り値を表示する. */
    }

    return (0);    /* 0を戻してmain関数を終了する. */
}
