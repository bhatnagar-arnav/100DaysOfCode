//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n, s,flag=0,count=-1;
    printf("Enter numbmer of elements \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n); 
    
    for(int i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched \n");
    scanf("%d",&s);
    for(int i=0;i<n;i++)
    {count++;
        if(arr[i]==s)
       { 
        flag=1;
        break;
       }
    } 
if(flag==0)
printf("-1");
else
printf("Found at index %d",count);
    return 0;
}