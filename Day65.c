//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool are_anagrams(char *s, char *t) {
    int len_s = strlen(s);
    int len_t = strlen(t);
    if (len_s != len_t) {
        return false;
    }
   int count[26] = {0}; 
    for (int i = 0; i < len_s; i++) 
    {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < len_t; i++)
     {
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
            
        }
    }
    
    return true;
}

int main() {
    char s[100], t[100];

    printf("Enter string s: ");
    scanf("%s", s);

    printf(" Enter string t: ");
    scanf("%s", t);

    printf("Output:\n");
    if (are_anagrams(s, t))  {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}