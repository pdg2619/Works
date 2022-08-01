#include <stdio.h>

unsigned short int count_bits_int16(void)
{
	unsigned short int x = 1, bits = 1;

	while ( x != 0 ) {
		x <<= 1;
		bits ++;	
	}
	bits -= 1;

	return (bits);
}

int main(void)
{
	printf("unsigned short int 型は %2d ビットです。\n", count_bits_int16());

	return (0);
}