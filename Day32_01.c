//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements for 1st array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements : ",n);
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int n2;
printf("Enter number of elements for 2nd array \n");
scanf("%d",&n2);
int arr2[n2];
printf("Enter %d elements :",n2);
for(int i=0;i<n2;i++)
{
    scanf("%d",&arr2[i]);
}
int arr3[(n+n2)];
for(int i=0;i<n;i++)
{
    arr3[i]=arr[i];
}
for(int i=n,j=0;i<(n+n2);i++,j++)
{
    arr3[i]=arr2[j];
}
for(int i=0;i<(n+n2);i++)
{
    printf(" %d",arr3[i]);
}
    return 0;
}