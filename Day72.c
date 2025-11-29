//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/

#include <stdio.h>
#include <stdlib.h> 
int main() {
    FILE *file_ptr;
    char buffer[256]; 
    file_ptr = fopen("info.txt", "r"); 

    if (file_ptr == NULL) 
    {
        printf("Error: Could not open the file 'info.txt'. Make sure it exists.\n");
        return 1;
    }
    printf("Contents of info.txt:\n");
    while (gets(buffer)) {
        printf("%s", buffer);
    }
    fclose(file_ptr);

    return 0;
}