//Q6: Write a program to swap two numbers using a third variable.
/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1
*/
#include <stdio.h>
void main()
{int a,b ,temp=0;
printf("enter 'a'\n");
scanf("%d",&a);
printf("enter 'b' \n");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("After swap: %d,%d \n",a,b);
}