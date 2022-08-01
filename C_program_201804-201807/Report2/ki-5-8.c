/* パスカル三角刑を15行目まで表示するプログラミング */
#include <stdio.h>

#define PASCAL_ROW		15	/* マクロで, 行列の行数を(PASCAL_ROW)を指定. */ 

int main(void)
{
	/* int 型の変数 i, j , k を宣言する.  */
	int i, j, k;
	/* パスカル三角刑の成分を初期化. */
	int a[PASCAL_ROW] = {0};
	int b[PASCAL_ROW] = {0};	
	/* 初項を1に設定. */
	a[1] = 1;
	/* パスカル三角刑を求める. */
	for(i = 1; i <= PASCAL_ROW; i += 1){
		for(j = 1; j <= 2 * (PASCAL_ROW - i); j+=1) {
				printf(" ");
		}

		if(i == 1) {
			printf("%4d \n", a[1]);
		}
		else {
			for (k = 1; k <= i; k += 1) {
				b[k] = a[k - 1] + a[k];
				printf("%4d ", b[k]);
		}
			printf("\n");
			for (k = 1; k <= i; k += 1) {
				a[k] = b[k];
			}
		}
	}
	/* 0 を戻してmain関数を終了する. */
	return (0);						
}