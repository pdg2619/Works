#include <stdio.h>

int main(void)
{
	int n;

	printf("整数を入力してくだし:");
	scanf("%d",&n);

	switch ( n % 2 ) {
		case 0 : printf("%d",n / 2); break;
		case 1 : printf("%d",3 * n + 1); break;
	}
	
	return 0;
}