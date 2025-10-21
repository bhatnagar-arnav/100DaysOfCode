//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>

int find_occurrence(int arr[], int n, int target, int search_first) {
    int low = 0;
    int high = n - 1;
    int result = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            result = mid; 
            
            if (search_first) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else if (arr[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    
    return result;
}

int main() {
    int n, target;
    
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int nums[n];
    printf("Enter the sorted elements:\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) return 1;
    }

    printf("Enter the target value: ");
    if (scanf("%d", &target) != 1) return 1;

    int first_occurrence = find_occurrence(nums, n, target, 1);
    int last_occurrence = find_occurrence(nums, n, target, 0);

    printf("Output:\n%d,%d\n", first_occurrence, last_occurrence);

    return 0;
}