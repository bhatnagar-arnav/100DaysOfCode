//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/


 #include <stdio.h>

int main() {
    int a,b;
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
    printf("Transpose of matrix :\n");
 
    for (int i = 0; i < b; i++) 
    {
        for(int j=0;j<a;j++)
        {
            printf("%d ", arr[j][i]);
        }
    printf("\n");
    }
    return 0;

}