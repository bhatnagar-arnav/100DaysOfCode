//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

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
    printf("The elements of the array are:\n");
 
    for (int i = 0; i < a; i++) 
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ", arr[i][j]);
        }
    printf("\n");
    }
    return 0;

}