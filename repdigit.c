#include <stdio.c>

int[] intToArray(int number){
  int[] arr;
  int rest;
  int i = 0;
  int result = number;
  while (result != 0) {
    result = result / 10;
    rest = result % 10;
    arr[i] = rest;
  }
}

int main(void) {
  scanf("give me a number: %d", int N);
  return 0;
}
