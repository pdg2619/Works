#include <stdio.h>

int main (void)
{
	int x = 45, y = 83;
	printf("整数 1 : %2d, 整数 2 : %2d\n", x, y);

	if ( x > y ) {
		printf("大きい方の整数は %2d です。\n", x);
}

	else {
		printf("大きい方の整数は %2d です。\n", y);
	}

	return (0);
}