//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main()
{
    int n,d,r=0;int place=1;
    printf("Enter a number \n");
    scanf("%d",&n);
    while(n!=0)
    {
      d=n%2;
      n=n/2;
      r=r+(d*place);
      place=place*10;
    }
    printf("%d",r);
    return 0;
}