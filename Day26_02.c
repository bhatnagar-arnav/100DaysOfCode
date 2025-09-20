/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    for(int i=4;i>=1;i--)
    {
         if(i%2==0)
        {
            printf("\n");
        }
        else
        {
        for(int j=i;j<4;j++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    }
    for(int i=1;i<=5;i++)
    {
        if(i%2==0)
        {
            printf("\n");
        }
        else
        {
        for(int j=i;j<=5;j++)
        {
            printf("*\n");
        }
        printf("\n");
       }
    }
    
    return 0;
}