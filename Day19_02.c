//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main() {
    int n,sum = 0;
    printf(" Enter a number \n");
    scanf("%d",&n);
    while(n!=0)
    {
        int d= n%10;
        n=n/10;
        sum=sum+d;
    }
    printf("%d",sum);
    return 0;
}