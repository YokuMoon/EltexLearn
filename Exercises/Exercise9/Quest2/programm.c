#include <stdio.h>

#define N 100

int main() {
    int arr[N];

    for (int i = 0; i < N; i++) {
        arr[i] = i+1;
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int cup = 0;
    for (int i = 0; i < N / 2; i++) {
        cup = arr[i];
        arr[i] = arr[N-i-1];
        arr[N-i-1] = cup;
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}