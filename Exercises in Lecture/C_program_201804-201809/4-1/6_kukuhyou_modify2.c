#include<stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i < 10; i++) {
		for(j = 1; j < 10; j++) {
			
		if ( ( ( (i*j) % 10 ) == 4 ) || ( ( ( i*j ) / 10 ) == 4 ) ) {
			printf("     ");
			continue;
		}

		printf("%5d", i*j);
		}
	printf("\n");
	}
	
	return 0;
}