//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1;

    printf("Enter Name: ");
    if (fgets(s1.name, sizeof(s1.name), stdin) == NULL) return 1;
    s1.name[strcspn(s1.name, "\n")] = 0; 

    printf("Enter Roll Number: ");
    if (scanf("%d", &s1.roll_no) != 1) return 1;

    printf("Enter Marks: ");
    if (scanf("%f", &s1.marks) != 1) return 1;
    printf("Output:\n");
    printf("Name: %s | Roll: %d | Marks: %.0f\n", 
           s1.name, s1.roll_no, s1.marks);

    return 0;
}