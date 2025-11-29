//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main()
{
int n,sum=0,count=0;
printf("Enter a number \n");
scanf("%d",&n);
for(int i=1; count<n; i+=2)
{
    sum = sum + i;
    count++;
} 
printf("%d",sum);

return 0;
}