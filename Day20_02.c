//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main() {
  char bi[50];
   printf("Enter a binary number \n");
   scanf("%s",&bi);
   for(int i=0;i<50;i++)
   {if(bi[i]=='0')
      bi[i]= '1';
    else if(bi[i]=='1')
    bi[i]='0';
   }

   printf("%s",bi);
    return 0;
}