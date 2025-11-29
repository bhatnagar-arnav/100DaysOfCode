//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>

int main() {
    int n, count1=0,count2=0,count3=0;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        count1++;
        else if (arr[i]>0)
        count2++;
        else if(arr[i]<0)
        count3++;
    }
    printf("POSITIVE = %d , ",count2);
    printf("NEGATIVE = %d , ",count3);
    printf("ZERO = %d ",count1);
    return 0;
}