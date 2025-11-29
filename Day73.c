//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define FILENAME "sample.txt"

int main() {
    FILE *file_ptr;
    char ch;
    int char_count = 0;
    int word_count = 0;
    int line_count = 0;
    bool in_word = false; 
    file_ptr = fopen(FILENAME, "r");

    if (file_ptr == NULL) {
        printf("Error: Could not open the file '%s'.\n", FILENAME);
        printf("Please ensure the file exists and try again.\n");
        return 1;
    }
    while ((ch = fgetc(file_ptr)) != EOF) {
        char_count++;
        if (ch == '\n') {
            line_count++;
        }
        if (isspace(ch) || ch == '\n' || ch == '\t') {
            in_word = false;
        } 
        else if (in_word == false) {
            word_count++;
            in_word = true;
        }
    }

    if (char_count > 0 && ch == EOF && line_count == 0) {
        line_count = 1;
    }
    fclose(file_ptr);
    printf("Output:\n");
    printf("Characters: %d\n", char_count);
    printf("Words: %d\n", word_count);
    printf("Lines: %d\n", line_count);

    return 0;
}