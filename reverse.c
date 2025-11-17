# include <stdio.h>
#define N 10


int main(void)
{
  int arr[N];
  for (int i = 0; i < N ; i++) {
    scanf("%d", &arr[i]);
  }

  printf("This is our arr looks like:\n");
  printf("[ ");
  
  for (int i = 0; i < N; i++) {
    printf("%d ,", arr[i]);
  }

  printf(" ]\n");

  printf("let's reverse our arr =================================\n");


  printf("[ ");

  for (int i = 0; i < N; i++) {
    printf("%d ,", arr[N-1-i]); // cuz the first one is N-1-i = 10-1-0 = 9 => wich is the index of the last elm
  }

  printf(" ]\n");

  return 0;
}
