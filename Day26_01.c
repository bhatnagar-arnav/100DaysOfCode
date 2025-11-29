/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

#include <stdio.h>

int main() {
    int count =5;
    
    for(int i=1;i<=5;i++)
    {
        for (int j=5;j>=i;j--)
        { 
            printf(" ");
        }
        
        for(int k=count;k<=5;k++)
        {
            printf("%d",k);
            
        }
    
        printf("\n");
        count--;
    }
    return 0;
}