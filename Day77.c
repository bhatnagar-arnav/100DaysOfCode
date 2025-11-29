//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h> 

int main() {
    FILE *input_ptr, *output_ptr;
    int ch; 
    input_ptr = fopen("../input.txt", "r"); 
    
    if (input_ptr == NULL) {
        input_ptr = fopen("input.txt", "r");
    }

    if (input_ptr == NULL) {
        printf("Error: Could not open input.txt for reading. File not found in expected directories.\n");
        return EXIT_FAILURE; 
    }
    output_ptr = fopen("output.txt", "w");
    if (output_ptr == NULL) {
        printf("Error: Could not create output.txt.\n");
        fclose(input_ptr);
        return EXIT_FAILURE;
    }
    while ((ch = fgetc(input_ptr)) != EOF) {
        fputc(toupper(ch), output_ptr);
    }
    fclose(input_ptr);
    fclose(output_ptr);
    
    printf("Output file written successfully.\n");
    return 0;
}