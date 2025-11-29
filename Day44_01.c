//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0;
    int digits = 0;
    int special_chars = 0;
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= '0' && ch <= '9') 
        {
            digits++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
        {
            continue; 
        }
        else if (ch == ' ' || ch == '\t')
         {
            spaces++;
        }
        else if (ch != '\n')
         {
            special_chars++;
        }
    }
    
    printf("Output:\nSpaces=%d, Digits=%d, Special=%d\n", 
           spaces, digits, special_chars);

    return 0;
}