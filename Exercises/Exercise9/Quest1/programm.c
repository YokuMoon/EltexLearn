#include <stdio.h>

#define N 10

int main() {
    int arr[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = i * N + j + 1;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d " ,arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}