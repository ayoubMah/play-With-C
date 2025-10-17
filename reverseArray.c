#include <stdio.h>

void inplace_swap(int *x, int *y) {
   *y = *x ^ *y; /* Step 1 */
   *x = *x ^ *y; /* Step 2 */
   *y = *x ^ *y; /* Step 3 */
}
// but this solution will not be good if the len of the arr is odd

void reverse_array(int a[], int cnt) {
   int first, last;
   for (first = 0, last = cnt-1; first <= last; first++,last--)
   inplace_swap(&a[first], &a[last]);
}

int main()
{
  printf("the array before reversing\n");
  int arr[] = {1,2,3,4};
  for (int i = 0; i < 4; i++ ) {
    printf("arr[%d] = %d\n", i , arr[i]);
  }
  printf("the array after reversing\n");
  reverse_array(arr, 4);

  for (int i = 0; i < 4; i++ ) {
    printf("arr[%d] = %d\n", i , arr[i]);
  }
  return 0;
}
