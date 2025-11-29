//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements : \n",n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--)
 {       printf(" %d",arr[i]);
 }
 printf("\n");
    return 0;
}