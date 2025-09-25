#include <stdio.h>

int main(void)
{
  int i = 6;
  int n = (2 * i) - 1;
  while (n != 0) {
    while (i !=0) {
      printf("*\n");
      printf("*");
      i-- ;
      n--;
    }
    printf("*");
    n-- ;
  }
  return 0;
}
