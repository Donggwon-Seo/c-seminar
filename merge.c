#include <stdio.h>
#define SIZE 4

void merge(int *A, int *B, int *C, int size);


int main() {
    int A[SIZE] = {2, 5, 7, 8};
    int B[SIZE] = {1, 3, 4, 6};
    int C[2 * SIZE] = {0};

    merge(A, B, C, SIZE * 2);

    for (int i = 0; i < 2 * SIZE; i++) {
        printf("%d ", C[i]);
    }
}

void merge(int *A, int *B, int *C, int size) {
    int aCount = 0, bCount = 0, cCount = 0;

    while (cCount != size) {
        if (aCount != SIZE && bCount != SIZE) {
            if (A[aCount] < B[bCount]) {
                C[cCount] = A[aCount];

                aCount++;
                cCount++;
            } else if (A[aCount] > B[bCount]) {
                C[cCount] = B[bCount];

                bCount++;
                cCount++;
            }
        } else if (aCount == SIZE && bCount != SIZE) {
            C[cCount] = B[bCount];
            bCount++;
            cCount++;

        } else if (bCount == SIZE && aCount != SIZE) {
            C[cCount] = A[aCount];
            aCount++;
            cCount++;
        }

    }
}