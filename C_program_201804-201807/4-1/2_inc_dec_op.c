﻿#include<stdio.h>

int main(void)
{
	int a = 3;

	printf("a++ = %d, ", a++);
	printf("a = %d\n", a);
	
	a = 3;

	printf("++a = %d, ", ++a);
	printf("a = %d\n", a);

	a = 3;

	printf("a-- = %d, ", a--);
	printf("a = %d\n", a);

	a = 3;

	printf("--a = %d, ", --a);
	printf("a = %d\n", a);

	return (0);
}