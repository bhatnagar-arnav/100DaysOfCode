//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/

#include <stdio.h>
void selection_sort(int arr[], int n)
 {
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) 
    {
        min_idx = i;
        for (j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n, k;
    
    printf("Enter the number of elements (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    printf("Enter the value of k: ");
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        printf("Error: k must be between 1 and %d.\n", n);
        return 1;
    }
    selection_sort(arr, n);
    printf("Output:\n%d\n", arr[k - 1]);

    return 0;
}