#include<stdio.h>

int main(void)
{
 printf("a = %d byte \n", sizeof(short int));			
 printf("b = %d byte \n", sizeof(unsingned short int));			
 printf("c = %d byte \n", sizeof(int));			
 printf("d = %d byte \n", sizeof(unsigned int));			
 printf("e = %d byte \n", sizeof(long int));			
 printf("f = %d byte \n", sizeof(unsigned long int));			
 printf("x = %d byte \n", sizeof(float));			
 printf("y = %d byte \n", sizeof(double));			
 printf("z = %d byte \n", sizeof(long double));			

 return (0);
}