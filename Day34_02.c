//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

int main() {
    int n, del, position = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &del);

    for (int i = 0; i < n; i++)
     {
        if (arr[i] == del) 
        {
            position = i;
            break;
        }
    }

    if (position != -1) 
    {
        for (int i = position; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--; 
        
        printf("Element deleted. The new array is:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } 
    else 
      printf("Element not found in the array.\n");
    
    return 0;
}