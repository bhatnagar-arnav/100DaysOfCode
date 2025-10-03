//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/


#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the number of rows and columns \n ");
    scanf("%d %d", &a,&b);

    int arr[a][b]; 
    printf("Enter  elements for 1st matrix : \n");
    for (int i = 0; i < a; i++)
     {
        for (int j =0;j<b;j++)
        {
        scanf("%d", &arr[i][j]);
        }
        printf("\n");
     }
     int arr2[a][b],sum_arr[a][b];
     printf("Enter elements for 2nd  matrix : \n");
     for(int i=0;i<a;i++)
     {
        for(int j=0;j<b;j++)
        {
            scanf("%d", &arr2[a][b]);
        }
        printf("\n");
     }
 printf("Sum of two matrix : \n");
    for (int i = 0; i < a; i++) 
    {
        for(int j=0;j<b;j++)
        {
             sum_arr[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d",sum_arr[i][j]);
        }
    }
  
    return 0;
}
