//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>
#include <stdlib.h> 
int main() {
    FILE *source_ptr, *dest_ptr;
    char source_file[100], dest_file[100];
    int ch; 
    printf("Enter the source filename (e.g., source.txt): ");
    scanf("%s", source_file);

    printf("Enter the destination filename (e.g., destination.txt): ");
    scanf("%s", dest_file);
    source_ptr = fopen(source_file, "r");
    if (source_ptr == NULL) {
        printf("Error: Could not open source file '%s' for reading.\n", source_file);
        return 1;
    }
    dest_ptr = fopen(dest_file, "w");
    if (dest_ptr == NULL) {
        printf("Error: Could not open destination file '%s' for writing.\n", dest_file);
        fclose(source_ptr); 
        return 1;
    }
    while ((ch = fgetc(source_ptr)) != EOF) {
        fputc(ch, dest_ptr);
    }
    fclose(source_ptr);
    fclose(dest_ptr);

    printf("Output:\nFile copied successfully to %s\n", dest_file);

    return 0;
}