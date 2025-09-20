/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>

int main() {
    for(int i=8;i>=1;i--)
    {
      if(i%2==0)
      {
        continue;
      }
    else{
        for(int j=i;j<8;j++)
        {
            printf("*");
        }
        printf("\n");
       }
    }
    
    for(int i=1;i<=9;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else{
        for(int j=i;j<=9;j++)
        {
            printf("*");
        }
        printf("\n");
       }
    }
    
    return 0;
}