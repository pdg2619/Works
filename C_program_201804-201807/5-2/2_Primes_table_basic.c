#include <stdio.h>

#define MAX_PRIME	30


int main(void)
{
	unsigned int i, n;
	unsigned short int primes[MAX_PRIME] = {0};
	unsigned int ptr = 0;
	
	primes[0] = 2;
	primes[1] = 3;
	ptr = 2;
	
	for ( n = 5; n <= MAX_PRIME; n += 2 ) {
		for ( i = 2 ;i <= n-1; i =+ 1 )
			{
			if( n%i == 0) {
				continue;
				}
			else { 
				primes[ptr] = n;
				ptr++;
			}
						}
						}
	printf("\n");
	printf("%d", ptr);
		
	return (0);
}