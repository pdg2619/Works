#include <stdio.h>

int max(int a, int b)
{
	if ( a > b ) {
		return (a);
}

	else {
		return (b);
	}
}

int main (void)
{
	int x = 45, y = 83;
	printf("整数 1 : %2d, 整数 2 : %2d\n", x, y);

	printf("大きい方の整数は %2d です。\n", max(x, y));

	return (0);
}