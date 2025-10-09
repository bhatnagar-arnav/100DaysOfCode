//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
 {
    char original_str[100];
    char reversed_str[100];
    int length, j;
    printf("Enter a string: ");
    scanf("%s", original_str);
    strcpy(reversed_str, original_str);
    length = strlen(reversed_str);
    j = length - 1;
    char temp;
    for(int i=0;i<j;i++)
     {
        temp = reversed_str[i];
        reversed_str[i] = reversed_str[j];
        reversed_str[j] = temp;
        j--;
    }
    if (strcmp(original_str, reversed_str) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    return 0;
}