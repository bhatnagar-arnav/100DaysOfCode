//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>

void sort_string(char *s) {
    int len = strlen(s);
    char temp;

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (s[j] > s[j + 1]) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];
    char sorted_str1[100], sorted_str2[100];
 printf("Enter two strings : \n");
    scanf("%s", str1);
    scanf("%s", str2);

    strcpy(sorted_str1, str1);
    strcpy(sorted_str2, str2);

    sort_string(sorted_str1);
    sort_string(sorted_str2);

    if (strcmp(sorted_str1, sorted_str2) == 0) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}