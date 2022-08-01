#include <stdio.h>

void set_zero_array(int a[], int n)
{
	int i;

	for( i = 0; i < n; i++) {
		a[i] = 0;
	}
}

void print_array(const int a[], int n)
{
	int i;

	printf("{ ");
	for ( i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("}");	
}

int main(void)
{
	int ary1[] = {1, 2, 3 ,4 ,5}, ary2[] = {3, 2, 1};

	printf ("ary1 = "); print_array(ary1, 5); printf("\n");
	printf ("ary2 = "); print_array(ary2, 3); printf("\n");

	set_zero_array(ary1, 5);
	set_zero_array(ary2, 3);

	printf ("再配列の全要素に0を代入しました。\n");

	printf ("ary1 = "); print_array(ary1, 5); printf("\n");
	printf ("ary2 = "); print_array(ary2, 3); printf("\n");

	return(0);
}