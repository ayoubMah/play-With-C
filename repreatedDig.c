#include <stdio.h>
#include <stdbool.h>

bool isRepeaped(int arr[], int size){
  for (int i = 0; i < size; i++) {
    for (int j = i+1; j < size; j++) {
      if (arr[i] == arr[j]) {
        return true;
      }
    }
  }
  return false;
}

int main(void)
{
  printf("Please Enter a number and me i'll tell you if this number has replicated digites or not :)\n");
  int n;
  scanf("%d", &n);
  // todo : first should convert the number to an array of numbers
  // so first we can do that by getting last elm by n % 10
  // and then we remove it so the remainning is the int division of n / 10
  // and so on intel we get 0 i guess
  //
  // let's count the number of elms in a number
  
  //int last = n % 10;
  int temp = n;
  int num = 0;
  while (temp != 0) {
    int rem = (int) temp / 10;
    temp = rem;
    num++;
  }
  printf("the number of elm in %d => is: %d",n,num);

  // now let's continue and make our logic and fill the array
  int arr[num];
  int i = 0;
  while (n != 0) {
    int last = n % 10;
    printf("the current last is => %d\n", last);
    arr[i] = last;
    int rem = (int) n / 10;
    printf("the current rem is => %d\n", rem);
    n = rem;
    i++;
    // let's see if we're good
  }
  for (int i = 0; i < num; i++) {
    printf("arr[%d] = %d\n", i, arr[i]);
  }

  // nice now the goal of exerciese is to check if a number
  // has repeated digits for not
  //
  if (isRepeaped(arr, num)) {
    printf("yes");
  }else {
    printf("no");
  }

  return 0;
}
