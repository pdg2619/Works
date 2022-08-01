/* 数列の最大値, 最小値を求め表示するプログラミング */
#include <stdio.h>

#define NUM_ARRAY	5				/* マクロで, NUM_ARRAYを指定 */


int main(void)
{
	int i, max = 0, min = 0;			/* int 型の変数 i, max, min を宣言する.  */
	int a[NUM_ARRAY] = {83, 95, 85 ,63, 89};	/* 配列を [NUM_ARRAY]項まで宣言し, 数列を代入. */
	
	printf("数列の最大値, 最小値を求めます。\n");	/*「数列の最大値, 最小値を求めます。」を表示. */

	min = max = a[0];				/* 変数 min, maxを第0項に設定. */

	for ( i = 0; i < NUM_ARRAY; i++ ) {		/* 数列の数を比較して最小値と最大値を求める. */
		if ( i != ( NUM_ARRAY - 1 ) ) {
			printf("a[%d] = %d, ", i, a[i]);
		}
		else {
			printf("a[%d] = %d\n", i, a[i]);
		}

		if ( ( i > 0 ) && ( a[i] > max ) ) {
			max = a[i];
		}

		if ( ( i > 0 ) && ( a[i] < min ) ) {
			min = a[i];
		}
	}
	
	printf("max = %d, min = %d\n", max, min);	/* 変数 min, maxを表示. */
		
	return (0);					/* 0 を戻してmain関数を終了する. */
}