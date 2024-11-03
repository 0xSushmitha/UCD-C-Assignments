#include <stdio.h>

void matmult(double A[5][3], double B[3][4], double C[5][4]);

int main() {
    double A[5][3], B[3][4], C[5][4];

    // Initialize matrices A and B
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            A[i][j] = i + j; // A[i][j] = i + j
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            B[i][j] = i - j; // B[i][j] = i - j
        }
    }

    // Call the matrix multiplication function
    matmult(A, B, C);

    // Print matrices A, B, and C
    printf("Matrix A:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%.2f ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix C (Result):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%.2f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
