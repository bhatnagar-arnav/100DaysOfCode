//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main() {
    int n, key, i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);
    
    // Create a new array with one extra space for the new element
    int new_arr[n + 1];

    // Copy elements until the correct position is found
    i = 0;
    j = 0;
    while (i < n && arr[i] < key) {
        new_arr[j] = arr[i];
        i++;
        j++;
    }
    
    // Insert the new element
    new_arr[j] = key;
    j++;
    
    // Copy the remaining elements from the original array
    while (i < n) {
        new_arr[j] = arr[i];
        i++;
        j++;
    }

    printf("The array with the new element is:\n");
    for (int k = 0; k < n + 1; k++) {
        printf("%d ", new_arr[k]);
    }
    printf("\n");

    return 0;
}