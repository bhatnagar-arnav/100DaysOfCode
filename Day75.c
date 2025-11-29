//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    char new_text[100];
    char filename[] = "data.txt";
    printf("Enter the new line of text to append: ");
  
    if (fgets(new_text, sizeof(new_text), stdin) == NULL) return 1;
    file_ptr = fopen(filename, "a"); 
    if (file_ptr == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        printf("Please ensure the file exists and has write permissions.\n");
        return 1;
    }
    fputs(new_text, file_ptr);
    fclose(file_ptr);

    printf("Output:\nFile updated successfully with appended text.\n");

    return 0;
}