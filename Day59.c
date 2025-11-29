//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>
#include <limits.h>
int max_subarray_sum(int arr[], int n, int k) {
    if (n < k || k <= 0) 
    {
        return -1;
    }
    int current_sum = 0;
    int max_sum; 
    for (int i = 0; i < k; i++)
     {
        current_sum += arr[i];
    }
    max_sum = current_sum;
    for (int i = 1; i <= n - k; i++) 
    {
        current_sum = current_sum - arr[i - 1] + arr[i + k - 1];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    return max_sum;
}

int main() {
    int n, k;

    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int arr[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    if (scanf("%d", &k) != 1) return 1;

    int result = max_subarray_sum(arr, n, k);

    if (result != -1) {
        printf("%d\n", result);
    } else {
        printf("Invalid input or array size.\n");
    }

    return 0;
}