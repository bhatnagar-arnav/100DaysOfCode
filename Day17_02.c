//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include<stdio.h>
int main()
{

    int n,count=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    if(n<=1)
    printf("Not prime");
    else
    {
    for (int i=1 ;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    printf("Prime nummber");
    else
    printf("Not a prime number");
    return 0;
}}