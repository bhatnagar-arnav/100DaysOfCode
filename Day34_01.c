//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
 
#include <stdio.h>
#define MAX_SIZE 10

int main() {
    int arr[MAX_SIZE];
    int n; 

    printf("Enter the number of elements (max %d): \n", MAX_SIZE);
    scanf("%d", &n);

    if (n >= MAX_SIZE) {
        printf("Error: Number of elements exceeds array capacity.\n");
        return 1;
    }

    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }
     int pos, new_element;
    printf("Enter position to insert the element (0 to %d): \n", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n)
     {
        printf("Invalid position!\n");
        return 1; 
        
    }

    printf("Enter element to be inserted: \n");
    scanf("%d", &new_element);

    for (int i = n; i > pos; i--)
     {
        arr[i] = arr[i - 1];
    }

    arr[pos] = new_element;
    n++;
    
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
    printf("\n");

    return 0;
}