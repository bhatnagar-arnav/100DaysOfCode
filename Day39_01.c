//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int R, C;
    bool are_distinct = true;

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

    int diagonal_elements[R];
    for (int i = 0; i < R; i++) {
        diagonal_elements[i] = matrix[i][i];
    }
    
    for (int i = 0; i < R; i++) {
        for (int j = i + 1; j < R; j++) {
            if (diagonal_elements[i] == diagonal_elements[j]) {
                are_distinct = false;
                goto end_check; 
            }
        }
    }

end_check:
    printf("Output:\n%s\n", are_distinct ? "True" : "False");

    return 0;
}