//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

#include <stdio.h>
#include <stdlib.h> 
int main() {
    char name[100];
    int age;
    FILE *file_ptr; 
    printf("Enter your Name: ");
   gets(name);
    printf("Enter your Age: ");
    if (scanf("%d", &age) != 1) {
        printf("Error reading age.\n");
        return 1;
    }
    file_ptr = fopen("info.txt", "w"); 
    if (file_ptr == NULL) {
        printf("Error: Could not create or open the file for writing.\n");
        return 1;
    }
    fprintf(file_ptr, "User Information:\n");
    fprintf(file_ptr, "Name: %s\n", name);
    fprintf(file_ptr, "Age: %d\n", age);
    fclose(file_ptr);
    printf("File created successfully! Data written to info.txt\n");

    return 0;
}