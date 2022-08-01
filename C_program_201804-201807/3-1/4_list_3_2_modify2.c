#include <stdio.h>

int main(void)
{
	int n;

	printf("整数を入力してくだし:");
	scanf("%d",&n);

	if ( ( (n % 4) == 1 ) || ( (n % 4) == 3 ) ) {
	printf("その整数は奇数です。\n");
	}
	
	else {
	printf("その整数は偶数です。\n");
	}

	return 0;
}