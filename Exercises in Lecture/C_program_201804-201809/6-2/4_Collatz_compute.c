/*  Collatz予想を計算するプログラム. */
#include <stdio.h>

#define MAX_NUM_Collatz 80

int Collatz_seq_compute (int x)	/*  Collatz予想を計算する関数. */
{
	int answer = 0;
	while (x > 1) {
		if (x % 2 == 0) {
                	x = x / 2;
		} 
		else {
                x = (x * 3) + 1;
		}
		answer++;
            }
        }
        return (answer);
 }

int main(void)
{
 	int i;
	int n;
	
	scanf ("%d", &n);
	
	if ( n >= 1 && n <= 80){
		While(i > 1)){ 
		printf("%d", Collatz_seq_compute(n));
		printf(" → ");
		}
		i = Collatz_seq_compute(n);
	}
	printf("index = %d, max length = %d", n, i);
	printf("\n"); 
	return(0); 
}