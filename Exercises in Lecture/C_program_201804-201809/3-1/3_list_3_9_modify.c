#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してくだし:");
	scanf("%d",&no);

	if (no == 0) {
	puts("その整数は奇数です。\n");
	}

	else {
	if (no > 0) {
		puts("その整数は正です。");
		}
	
	else {
		puts("その整数は負です。");
		}
	}
	
	return 0;
}