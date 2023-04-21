#include <stdio.h>

#define N 10

int main() {
    int arr[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j < N-i-1) {
                arr[i][j] = 0;
            } else {
                arr[i][j] = 1;
            }
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