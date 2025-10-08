#include <stdio.h>

void doubleArray(int *arr, int size){
  for (int i = 0; i < size; i++) {
    // arr is an address it is the first address of the array
    // so when we did arr + i we want the: current, second, third ... with
    // i = 0, 1, 2 ...
    // and when we did *(arr) we call the value not the address 
    // and finally we doubly it
    *(arr + i) = *(arr + i) * 2;
  }
}
int main()
{
  int numbers[] = {1, 2, 3, 4, 5};
  doubleArray(numbers, 5);
  for (int i = 0; i < 5; i++) {
    printf("arr[%d]=%d\n", i, numbers[i]);
  }
  return 0;
}
