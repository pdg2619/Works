/*		          <<<WARNING!!!>>>					*/
/* 情報セキュリティの観点から, rand 関数, srand 関数は使用するべきではない. 	*/
/* 今回はあくめで実習・演習の一環として, またシードの初期化や乱数生成などを, 	*/
/* 少ない知識で効率的に実施するための苦肉の策であることに注意が必要. 		*/

#include <stdio.h>	/* printf 関数を利用するためにインクルードする．*/
#include <stdlib.h>	/* rand 関数, srand 関数を利用するためにインクルードする．*/
#include <time.h>	/* time 関数を利用するためにインクルードする．*/

#define NUM_CELLS 10		/* 定数マクロ NUM_CELLSを 10 で定義する．*/
#define MIN_NUM_RAT_PT 77	/* 定数マクロ MIN_NUM_RAT_PTを 77 で定義する．*/
#define MAX_NUM_RAT_PT 79	/* 定数マクロ MAX_NUM_RAT_PTを 79 で定義する．*/
#define MAX_NUM_LOOP 40		/* 定数マクロ MAX_NUM_LOOPを 40 で定義する．*/

int main (void)		/* main関数を開始する. */
{
	unsigned int i, j;	/* 下記の3次元配列をループで代入するために使用する変数． */				
	unsigned int a[NUM_CELLS][NUM_CELLS][2] =  {};	/* 0～NUM_CELLS^2 - 1 までの乱数を格子する3次元配列．*/	
							/* a[i][j][0]をx座標の値, a[i][j][1]をy座標の値とみたす．*/
	unsigned int num_rat_pt;	/* 0 ≤ m, n ≤ NUM_CELLS^2 - 1 なる整数に対し, */
					/* m^2 + n^2 ≤ 100^2 となる格子点(m, n)の個数を表す変数．*/
	unsigned int num_loop = 0;	/* 本実験を行う回数をカウントする変数．*/
	unsigned int flag = 0;		/* 本実験の終了条件を表す変数．*/
	unsigned int scale_experiment = NUM_CELLS*NUM_CELLS;

	printf("MIN_NUM_RAT_PT = %d\n\n", MIN_NUM_RAT_PT);
	
	do {	/* do-while文を実行する. */
		num_rat_pt = 0;		/* 変数num_rat_ptに0を代入する. */

		/* 乱数系例の変更 */
		srand((unsigned) time(NULL));

		for ( i = 0; i < NUM_CELLS; i++ ){
			for(j = 0; j < NUM_CELLS; j++) {
				a[i][j][0] = ( (unsigned int) rand() )%(scale_experiment);	/* 乱数を生成する. */
				a[i][j][1] = ( (unsigned int) rand() )%(scale_experiment);	/* 乱数を生成する. */
	
					if ( ( a[i][j][0]*a[i][j][0] + a[i][j][1]*a[i][j][1])
							<= (scale_experiment*scale_experiment) ) {
						num_rat_pt++;	/* 変数num_loopに1を増やす．*/
					}
				}
			}
	
			num_loop++;	/* 変数num_loopに1を増やす．*/
		
			if( (MIN_NUM_RAT_PT<=num_rat_pt) && (num_rat_pt<=MAX_NUM_RAT_PT ) ) {
				flag = 1;	/* 変数flagに1を代入する．*/
			}
			
			printf("num_loop = %2d, num_rat-pt = %2d\n", num_loop, num_rat_pt);

		} while ( ( !flag ) && ( num_loop < MAX_NUM_LOOP ) );	/* do-while 文の継続を判定する.　*/

		if ( flag == 0 ) {
			printf("実験に失敗しました. \n");
			return (0);
		}

		else {
			for ( i = 0; i < NUM_CELLS; i++) {
				for ( j = 0; j < NUM_CELLS; j++) {
					printf("(%2d, %2d), ", a[i][j][0], a[i][j][1]);
				/* 変数a[i][j][0], a[i][j][1]の値を表示. */
				}
				printf("\n");
			}
		}

		return (0);

}