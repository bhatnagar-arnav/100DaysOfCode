//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a character \n");
    scanf("%c",&ch);
    if(ch=='A'|| ch == 'E'|| ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    printf("vowel");
    else 
    printf("consonant");

}