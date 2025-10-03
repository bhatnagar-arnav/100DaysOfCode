//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>
#include <stdlib.h> // For min/max logic used implicitly

void diagonal_traversal_simple(int R, int C, int matrix[R][C]) {
    // The maximum length of any diagonal is min(R, C)
    int max_diag_length = (R < C) ? R : C;
    int temp_diag[max_diag_length]; 

    // The traversal runs over all possible sums of indices (k = r + c)
    for (int k = 0; k < R + C - 1; k++) {
        
        // 1. Determine the starting point (r, c) and the number of elements
        int r_start = (k < R) ? k : R - 1;
        int c_start = k - r_start;
        int count = 0;
        
        // 2. Traverse and Store (Always Top-to-Bottom/Left-to-Right Diagonal)
        int r = r_start;
        int c = c_start;
        
        // Traverse the anti-diagonal: r decreases, c increases
        while (r >= 0 && c < C && r < R && c >= 0) {
            temp_diag[count++] = matrix[r][c];
            r--;
            c++;
        }
        // Corrected Printing Logic for the "Store and Reverse Method"

// 3. Conditional Printing (Alternating Direction)
if (k % 2 != 0) { // For k=1, 3, 5... (Odd diagonals)
    // The sample requires the ODD diagonals (k=1, 3) to be printed in the standard anti-diagonal order (2 4, 6 8).
    // The logic below reverses the print order of the temporary array. 
    
    // To match the sample output exactly, the logic must be:
    
    // This part prints the array in a reversed order:
    for (int i = count - 1; i >= 0; i--) { 
        printf("%d ", temp_diag[i]);
    }
} else { // For k=0, 2, 4... (Even diagonals)
    // The sample requires the EVEN diagonals (k=0, 2) to be printed in the reverse order (7 5 3).
    // The logic below prints the array in a normal order:
    
    // To match the sample output exactly, the logic must be:
    
    for (int i = 0; i < count; i++) { 
        printf("%d ", temp_diag[i]);
    }
}}
}

int main() {
    int R, C;

    printf("Enter the number of rows (R) and columns (C): ");
    if (scanf("%d %d", &R, &C) != 2 || R <= 0 || C <= 0) return 1;

    int matrix[R][C];
    
    printf("Enter the elements of the %d x %d matrix:\n", R, C);
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Output:\n");
    diagonal_traversal_simple(R, C, matrix);
    printf("\n");
    
    return 0;
}