#include <stdio.h>

void reverse_sign_print(int n)
{
	printf("符号を反転した整数は %d です。\n", -n);
}

int main (void)
{
	int n;
	
	printf("整数を入力してください : ");
	scanf ("%d", &n);
	
	reverse_sign_print(n);

	return (0);
}