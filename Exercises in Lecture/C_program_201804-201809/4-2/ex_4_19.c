#include<stdio.h>

int main(void)
{
	int i, n;
	int x = 0;
	
	printf("整数：");
	scanf("%d", &n);

	for (i = 1; i <= n; i ++)
		{		
			if (n % i == 0)	
			{		
				printf("%d ", i);
				x++;
			}		
		}
	
	printf("\n約数は%d個です。\n", x);	
	return 0;
}