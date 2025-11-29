//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>
#include <stdlib.h>

void merge_sorted_arrays(int nums1[], int m, int nums2[], int n) {
    int total_size = m + n;
    int merged_array[total_size];
    int i = 0; 
    int j = 0; 
    int k = 0; 
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged_array[k++] = nums1[i++];
        } else {
            merged_array[k++] = nums2[j++];
        }
    }
    while (i < m) {
        merged_array[k++] = nums1[i++];
    }

    while (j < n) {
        merged_array[k++] = nums2[j++];
    }
    printf("Output:\n");
    for (k = 0; k < total_size; k++) {
        printf("%d ", merged_array[k]);
    }
    printf("\n");
}

int main() {
    int m, n;
    printf("Enter size of first array (m): ");
    scanf("%d", &m);

    int nums1[m];
    printf("Enter %d sorted elements for nums1:\n", m);
    for (int i = 0; i < m; i++) 
    {
        scanf("%d", &nums1[i]);
    }
    printf("Enter size of second array (n): ");
    scanf("%d", &n);

    int nums2[n];
    printf("Enter %d sorted elements for nums2:\n", n);
    for (int i = 0; i < n; i++)
     {
        scanf("%d", &nums2[i]) ;
    }

    merge_sorted_arrays(nums1, m, nums2, n);

    return 0;
}

