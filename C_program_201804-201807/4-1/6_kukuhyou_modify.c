#include<stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i < 10; i++) {
		for(j = 1; j < 10; j++) {
			
		if ( (i*j) > 40 ) {
			break;
		}

		printf("%5d", i*j);
		}
	printf("\n");
	}
	
	return 0;
}