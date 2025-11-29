//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include<stdio.h>
void main()
{int n1, n2 , n3;
    printf("Enter 3 numbers\n ");
    scanf("%d %d %d",&n1,&n2,&n3);
    if ( n1> n2 && n1>n3)
    printf(" largest is %d", n1);
    else if(n2>n1&&n2>n3)
    printf(" largest is %d", n2);
    else 
    printf(" largest is %d", n3);


}