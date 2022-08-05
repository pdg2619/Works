#include<stdio.h>

int main(void)
{
	int i, n;
	
	printf("整数：");
	scanf("%d", &n);

	for (i = 1; i <= n; i +=2 ) {
		printf("%d ", i);
	}
	printf("\n");
	
	return 0;
}