//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements :\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];int sec_large=arr[0];
    for(int i=0;i<n;i++)
    {
        if(largest<arr[i])
        {sec_large = largest;
          largest = arr[i];
         }
          else if (arr[i] > sec_large && arr[i] != largest) 
           {
             sec_large = arr[i];
           }
        }
     printf("2nd Largest number = %d",sec_large) ;
    return 0;
}