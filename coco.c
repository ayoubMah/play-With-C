#include <unistd.h>

void print(int *c){
  write(1, c, 1);
}


int main()
{
  int j = 0;
  while (j < 100) {
    print((int*)j);
    j++;
  }
  return 0;
}
