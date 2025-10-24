//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

#include <stdio.h>

int main() {
    int n;
    long long total_sum = 0;
    long long left_sum = 0;
    int pivot_x = -1;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        total_sum += i;
    }

    for (int x = 1; x <= n; x++) {
        
        left_sum += x;

        long long right_sum = total_sum - (left_sum - x);

        if (left_sum == right_sum) {
            pivot_x = x;
            break; 
        }
    }

    printf("%d\n", pivot_x);

    return 0;
}