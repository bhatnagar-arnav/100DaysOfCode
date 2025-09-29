//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the number of rows and columns \n ");
    scanf("%d %d", &a,&b);

    int arr[a][b]; 
    printf("Enter  elements : \n");
    int row_sum[a];
    for (int i = 0; i < a; i++)
     {
        for (int j =0;j<b;j++)
        {
        scanf("%d", &arr[i][j]);
        }
        printf("\n");
     }
    printf("The elements of the array are:\n");
 
    for (int i = 0; i < a; i++) 
    {
        int sum=0;
        for(int j=0;j<b;j++)
        {
            sum=sum+arr[i][j];
        }
        row_sum[i]=sum;
    }
    for(int i=0;i<a;i++)
    {
         printf("%d ",row_sum[i]);

    }
    
    return 0;

}