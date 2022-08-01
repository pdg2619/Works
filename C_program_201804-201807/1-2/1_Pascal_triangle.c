#include <stdio.h> /* printf関数を利用するためにインクルードする. */

int main(void) /* main関数を開始する. */
{
  printf("%2d\n", 1); 
  printf("%2d %2d\n", 1, 1);
  printf("%2d %2d %2d\n", 1, 2, 1);
  printf("%2d %2d %2d %2d\n", 1, 3, 3, 1);
  printf("%2d %2d %2d %2d %2d\n", 1, 4, 6, 4, 1);
  printf("%2d %2d %2d %2d %2d %2d\n", 1, 5, 10, 10, 5, 1);
  printf("%2d %2d %2d %2d %2d %2d %2d\n", 1, 6, 15, 20 ,15 ,6 ,1);
  return (0);
}