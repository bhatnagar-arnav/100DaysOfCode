//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/

#include <stdio.h>
#include <string.h>
typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

int main() {
    Student student1 = {"Default", 0, 0};
    Student *sPtr = &student1;
    char input_name[50];
    int input_roll;
    int input_marks;
    printf("Student pointer modifying values: ");
    if (scanf("%s %d %d", input_name, &input_roll, &input_marks) != 3) {
        printf("Invalid input format.\n");
        return 1;
    }
    strcpy(sPtr->name, input_name);
    sPtr->roll = input_roll;
    sPtr->marks = input_marks;
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", 
           sPtr->name, sPtr->roll, sPtr->marks);

    return 0;
}