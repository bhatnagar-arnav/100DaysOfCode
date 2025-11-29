//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>
#include <stdlib.h> // For exit() or return 1

int main() {
    int R, C;
    int diagonal_sum = 0;

    printf("Enter the number of rows and columns (R C): ");
    if (scanf("%d %d", &R, &C) != 2) return 1;

    // Check if the matrix is square
    if (R != C) {
        printf("Error: Matrix must be square (R must equal C) to find the main diagonal sum.\n");
        return 1;
    }

    int matrix[R][C];
    
    printf("Enter the elements of the %d x %d matrix:\n", R, C);
    
    // 1. Read the matrix elements
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 2. Calculate the sum of the main diagonal (A[i][i])
    // Only one loop is needed since i must equal j
    for (int i = 0; i < R; i++) {
        diagonal_sum += matrix[i][i];
    }

    printf("Output:\n%d\n", diagonal_sum);

    return 0;
}