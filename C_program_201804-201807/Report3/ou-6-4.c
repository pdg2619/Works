/*  Collatz予想を計算するプログラム. */
#include <stdio.h>

int Collatz_seq_compute (int x)	/*  Collatz予想を計算する関数. */
{
		if (x % 2 == 0) {
                	x = (x / 2);
			return(x);
		} 
		else {
                x = ((x * 3) + 1);
			return(x);
		}
 }


int main(void)			/* main関数を開始する. */
{
 	int n, k;		/* int 型の変数 n, k 宣言. */
	int l = 0;		/* int 型の変数 n, k 宣言し、初期化. */
		
	scanf ("%d", &n);	/* キーボードで整数nを入力. */
	k = n;			/* kにnを代入. (kはnの最初の値を保存する変数)　*/
	
	if ( n >= 1 && n <= 80){ /* nの値が　1≤n≤80 を満たすとき、以下の演算を進行. */
			while(n > 1){ /* nの値が　1 < n を満たすと、以下の演算を反復進行. */
				n = Collatz_seq_compute (n);	/* nにCollatz予想関数で計算した値を代入. */
				printf(" → ");	/*「 → 」を表示. */	
				printf("%d",n);	/*「 n 」を表示. */
				l++;		/* lの値を1増加. (lはCollatz予想の長さ.) */
				continue;	/* while文を続く. */
		}
	}
	printf("\n"); 
	printf("index = %d, max length = %d", k, l);	/* index(k) と max length(l)を表示. */
	printf("\n"); 
	return(0); 
}