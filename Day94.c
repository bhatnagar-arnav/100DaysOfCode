//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
void print_student_data(struct Student s) 
{
    printf("Name: %s | Roll: %d | Marks: %.0f\n", 
           s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s1;
    
    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);
    
    printf("Output:\n");
    print_student_data(s1);

    return 0;
}