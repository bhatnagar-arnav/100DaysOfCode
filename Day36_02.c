//Q72: Find the sum of all elements in a matrix.
/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main() {
    int a,b,sum=0;
    printf("Enter the number of rows and columns \n ");
    scanf("%d %d", &a,&b);

    int arr[a][b]; 
    printf("Enter  elements : \n");
    
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
        for(int j=0;j<b;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("Sum = %d ",sum);
    
    return 0;

}