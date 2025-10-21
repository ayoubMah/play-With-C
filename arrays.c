#include <stdio.h>

#define N 10 // use macro to define the length of an array

int sum = 0;
int main(void) {
    int arr[N];

    for (int i = 0; i < N; i++) {
        arr[i] = i * i;
        printf("arr[%d] = %d\n", i, arr[i]);

        sum += arr[i];
    }


    printf("the sum = %d \n" , sum);

    printf("========================================================\n");

    int a[15] = {[13] = 10 ,[8] = 10};

    for (int i = 0; i < 15; i++) {
        printf("a[%d] = %d\n", i, a[i]);

    }

    return 0;
}

