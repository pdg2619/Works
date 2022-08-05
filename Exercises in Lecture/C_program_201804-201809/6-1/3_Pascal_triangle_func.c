#include <stdio.h>

#define PASCAL_ROW	15

void pascal_row(int i, int j, int T)
	for(i = 1; i <= PASCAL_ROW; i++){
		for(j = 1; j <= i; j++)
		T += a[i-1][j] + a[i][j-1];
	}
}

int main(void)
{
	int i, j, T = 0;
	a[0][0] = 1;
	


	return(0);
	
}