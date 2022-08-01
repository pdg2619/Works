#include<stdio.h>

int main(void)
{
	int i = 1;
	int sum = 0;

	do {
		sum = sum + i;
		i = i + 1;
	} while (i <= 10);

	printf("%d\n", sum);
	
	return 0;
}