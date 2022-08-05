#include <stdio.h>

int main(void)
{
	int n;

	printf("整数を入力してくだし:");
	scanf("%d",&n);

	if ( (n % 3) == 0 ) {
	puts("その数は3で割り切れます。");
	}
	
	else if ( (n % 3) == 1 ){
	puts("その数は3で割った剰余は1です。");
	}

	else {
	puts("その数は3で割った剰余は2です。");
	}

	return 0;
}