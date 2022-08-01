#include <stdio.h>

int main(void)
{
	int n;

	printf("整数を入力してくだし:");
	scanf("%d",&n);

	if (n % 2) {
	printf("その整数は奇数です。\n");
	}
	
	return 0;
}