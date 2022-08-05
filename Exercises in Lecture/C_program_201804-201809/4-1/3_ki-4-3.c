#include<stdio.h>

int main(void)
{
	int i, n;
	int sum = 0;
	printf("整数 : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		sum += i;
	}
	
	printf("1から%dまでの和は%d\n", n, sum);
	
	return 0;
}