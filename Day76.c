//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file_ptr;
    char filename[100];
    char buffer[256];
    printf("Enter the filename to check: ");
    scanf("%s", filename);

    file_ptr = fopen(filename, "r"); 
    if (file_ptr == NULL) {
        printf("Output:\nError: File '%s' does not exist!\n", filename);
        return 1;
    }
    printf("Output:\nFile opened successfully.\n");
    while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
        printf("%s", buffer);
    }
    fclose(file_ptr);

    return 0;
}