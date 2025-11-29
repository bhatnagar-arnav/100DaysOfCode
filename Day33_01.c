//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int main() {
    int n, key;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int mid;
    int found_index =-1; // Initialize to -1 to indicate not found

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found_index = mid;
            break; // Element found, exit the loop
        } else if (arr[mid] < key) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    if (found_index !=-1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }

    return 0;
}