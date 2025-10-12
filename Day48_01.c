//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_rotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        return false;
    }

    if (len1 == 0) {
        return true;
    }

    char s1s1[len1 * 2 + 1];
    
    // Copy s1 to s1s1
    strcpy(s1s1, s1);
    
    // Concatenate s1 to the end of s1s1
    strcat(s1s1, s1);

    if (strstr(s1s1, s2) != NULL) {
        return true;
    } else {
        return false;
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1) ;

    printf("Enter second string: ");
    scanf("%s", str2) ;

    if (is_rotation(str1, str2)) 
    {
        printf("Output:\nRotation\n");
    } else {
        printf("Output:\nNot rotation\n");
    }

    return 0;
}