//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main()
{
    int n,r=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    while(n>0)
    {
        int d = n % 10;
        n = n / 10;
        r = r * 10 + d;
    }

    printf("%d", r);

    return 0;
}