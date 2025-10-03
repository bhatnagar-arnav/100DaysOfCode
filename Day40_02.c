//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int main() {
    int R1, C1, R2, C2;

    // --- 1. Input Dimensions ---
    printf("Enter rows and columns for Matrix 1 (R1 C1): ");
    if (scanf("%d %d", &R1, &C1) != 2 || R1 <= 0 || C1 <= 0) return 1;

    printf("Enter rows and columns for Matrix 2 (R2 C2): ");
    if (scanf("%d %d", &R2, &C2) != 2 || R2 <= 0 || C2 <= 0) return 1;

    // --- 2. Check Multiplication Condition ---
    if (C1 != R2) {
        printf("\nError: Matrices cannot be multiplied.\n");
        printf("The number of columns in Matrix 1 (%d) must equal the number of rows in Matrix 2 (%d).\n", C1, R2);
        return 0;
    }

    int matrix1[R1][C1], matrix2[R2][C2], result[R1][C2];
    
    // --- 3. Input Elements ---
    printf("Enter elements of Matrix 1 (%d x %d):\n", R1, C1);
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of Matrix 2 (%d x %d):\n", R2, C2);
    for (int i = 0; i < R2; i++) {
        for (int j = 0; j < C2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // --- 4. Matrix Multiplication ---
    // i: iterates through rows of result (R1)
    for (int i = 0; i < R1; i++) {
        // j: iterates through columns of result (C2)
        for (int j = 0; j < C2; j++) {
            result[i][j] = 0;
            // k: performs the dot product summation (C1 or R2 times)
            for (int k = 0; k < C1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // --- 5. Output Result ---
    printf("\nOutput (Product Matrix %d x %d):\n", R1, C2);
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}