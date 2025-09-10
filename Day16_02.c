//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
int main()
{

    int n, p = 0, temp;
    printf("Enter a number \n");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        int d = temp % 10;
        p = p * 10 + d;
        temp = temp / 10;
    }
    if (n == p)

        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}