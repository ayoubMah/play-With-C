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

    return 0;
}

