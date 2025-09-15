//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main() {
    int n,f,sum=0;
    printf("Enter a number \n");
    scanf("%d",&n);
   int num=n;
    while(num!=0)
    {int d=num%10;
        num=num/10;
        f=1;
    for(int i=1;i<=d;i++) 
{
    f=f*i;
}
sum=sum+f;
    }
if(sum==n)
printf("Strong number");
else
printf("Not a strong number");

    return 0;
}