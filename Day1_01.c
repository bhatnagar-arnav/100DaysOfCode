//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>

int main() {
    int num1=0, num2=0, sum=0;
    printf("Enter two numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum = %d\n", sum);
    return 0;
}
