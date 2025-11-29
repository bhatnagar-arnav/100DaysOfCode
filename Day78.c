//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include <stdio.h>
#include <stdlib.h> 
#include <ctype.h>  
int is_vowel(char ch) {
    ch = tolower(ch); 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    FILE *file_ptr;
    int ch; 
    int vowels = 0;
    int consonants = 0;
    char filename[] = "text.txt";
    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }
    while ((ch = fgetc(file_ptr)) != EOF) 
    {
        if (isalpha(ch)) {
            
            if (is_vowel(ch)) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    fclose(file_ptr);

    printf("Output:\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}