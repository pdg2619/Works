#include <stdio.h>    /* printf関数を利用するためにインクルードする. */
#include <math.h>    /* pow関数を利用するためにインクルードする. */

#define NUM_ARRAY    5    /* 定数マクロNUM_ARRAYを5で定義する. */

int main(void)    /* main関数を開始する. */
{
    int i, max, min;    /* int型の変数i, max, minを宣言する. */
    long double a_mean = 0, g_mean = 1;    /* long double型の変数a_mean(算術平均), g_mean(幾何平均)を宣言し, a_meanを0で, g_meanを1でそれぞれ初期化する. */
    int a[NUM_ARRAY] = {83, 95, 85, 63, 89};    /* int型の配列a[NUM_ARRAY]を宣言し, 配列a[NUM_ARRAY]を{83, 95, 85, 63, 89}で初期化する. */

    printf("数列の最大値, 最小値を求めます。\n");    /* 配列a[NUM_ARRAY]を数列と見なし, その数列の各項の中での最大値, 最小値を求める旨を表示する. */

    min = max = a[0];    /* min, maxにa[0]の値を代入する. */

    for ( i = 0; i < NUM_ARRAY; i++ ) {    /* 初期条件:i = 0, 反復条件:i < NUM_ARRAY, 更新処理:i++としてfor文を実行する. */
        a_mean += (long double) (a[i]);    /* a_mean + (long double) (a[i])を計算し, その結果をa_meanに代入する. */
        g_mean *= (long double) (a[i]);    /* g_mean * (long double) (a[i])を計算し, その結果をg_meanに代入する. */

        if ( i != ( NUM_ARRAY - 1 ) ) {    /* iが( NUM_ARRAY - 1 )と等しくない場合には以下の中括弧で囲まれた部分の処理を行う. */
            printf("a[%d] = %d, ", i, a[i]);    /* 配列の要素a[i]の値とカンマを表示する. */
        }
        else {    /* iが( NUM_ARRAY - 1 )と等しい場合には以下の中括弧で囲まれた部分の処理を行う. */
            printf("a[%d] = %d\n", i, a[i]);    /* 配列の要素a[i]の値を表示し, 表示の改行を行う. */
        }

        if ( ( i > 0 ) && ( a[i] > max ) ) {    /* i > 0またはa[i] > maxを満たす場合には以下の中括弧で囲まれた部分の処理を行う. */
            max = a[i];    /* 配列の要素a[i]の値をmaxに代入する. */
        }

        if ( ( i > 0 ) && ( a[i] < min ) ) {    /* i > 0またはa[i] < minを満たす場合には以下の中括弧で囲まれた部分の処理を行う. */
            min = a[i];    /* 配列の要素a[i]の値をminに代入する. */
        }
    }

    a_mean = (long double) (a_mean/NUM_ARRAY);    /* (long double) (a_mean/NUM_ARRAY)を計算し, その結果をa_meanに代入する. */
    g_mean = (long double) ( pow( (double) g_mean, (double) ( ( (double) 1 )/( (double) NUM_ARRAY ) ) ) );    /* (long double) ( pow( (double) g_mean, (double) ( ( (double) 1 )/( (double) NUM_ARRAY ) ) ) )を計算し, その結果をg_meanに代入する. */

    printf("max = %d, min = %d\n", max, min);    /* max, minに格納された値をそれぞれ表示する. */
    printf("a_mean = %Lf, g_mean = %Lf\n", a_mean, g_mean);    /* a_mean, g_meanに格納された値をそれぞれ表示する. */

    return (0);    /* 0を戻してmain関数を終了する. */
}
