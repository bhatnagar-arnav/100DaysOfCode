//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    char str[1000];
    bool capitalize_next = true; 

    printf("Enter a string (sentence case/title case): \n");
    
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;
    
    str[strcspn(str, "\n")] = '\0'; 

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (isspace(str[i])) {
            capitalize_next = true;
        } 
        else if (isalpha(str[i])) {
            
            if (capitalize_next) {
                str[i] = toupper(str[i]);
                capitalize_next = false; 
            } else {
                str[i] = tolower(str[i]);
            }
        }
    }

    printf("Output:\n%s\n", str);

    return 0;
}