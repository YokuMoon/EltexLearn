#include <stdio.h>

#define N 10

int main() {
    int arr[N][N];

    int counter = 1;
    int rowBegin = 0;
    int rowEnd = N - 1;
    int columnBegin = 0;
    int columnEnd = N - 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = 0;
        }
    }

    if (N != 1 ) {
        while (counter < N*N) {
            for (int j = rowBegin; j < columnEnd; j++) {
                arr[rowBegin][j] = counter;
                counter++;
            }

            for (int j = rowBegin; j < rowEnd; j++) {
                arr[j][columnEnd] = counter;
                counter++;
            }

            for (int j = columnEnd; j > columnBegin; j--) {
                arr[rowEnd][j] = counter;
                counter++;
            }

            for (int j = rowEnd; j > rowBegin; j--) {
                arr[j][columnBegin] = counter;
                counter++;
            }

            rowBegin++;
            rowEnd--;
            columnBegin++;
            columnEnd--;

            if (counter == N*N) {
                arr[rowEnd][columnEnd] = counter;
                break;
            }
        }
    } else {
        arr[0][0] = 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d " ,arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}