//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/


#include <stdio.h>
#include <stdbool.h>

int main() {
    int R, C;
    bool is_symmetric = true;

    printf("Enter the number of rows (R) and columns (C): ");
    if (scanf("%d %d", &R, &C) != 2 || R <= 0 || C <= 0) return 1;
    if (R != C) {
        printf("Output:\nFalse\n");
        return 0;
    }
    int matrix[R][C];
    printf("Enter the elements of the %d x %d matrix:\n", R, C);
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < R; i++) 
    {
        for (int j = 0; j < C; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = false;
                goto end_check; 
            }
        }
    }

end_check:
    printf("Output:\n%s\n", is_symmetric ? "True" : "False");

    return 0;
}