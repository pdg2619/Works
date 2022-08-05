#include <stdio.h>

#define PASCAL_ROW		15

int main(void)
{
	int i, j, k;
	int a[PASCAL_ROW] = {0};
	int b[PASCAL_ROW] = {0};	
	
	a[1] = 1;

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
	return (0);
}