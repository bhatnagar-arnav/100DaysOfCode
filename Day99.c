//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

int main() {

    Student *sPtr;
    sPtr = (Student *)malloc(sizeof(Student));
    if (sPtr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }
    printf("Student allocated dynamically with details: ");
    if (scanf("%s %d %d", sPtr->name, &(sPtr->roll), &(sPtr->marks)) != 3) {
        printf("Invalid input format.\n");
        free(sPtr);
        return 1;
    }
    printf("Name: %s | Roll: %d | Marks: %d\n", sPtr->name, sPtr->roll, sPtr->marks);
    free(sPtr);
    sPtr = NULL; 

    return 0;
}