//Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[50];
    int id;
    struct Date join_date; 
};

int main() {
    struct Employee emp;

    printf("Enter Employee Name: ");
    if (scanf("%s", emp.name) != 1) return 1;

    printf("Enter Employee ID: ");
    if (scanf("%d", &emp.id) != 1) return 1;

    printf("Enter Joining Date (Day Month Year): ");
    if (scanf("%d %d %d", &emp.join_date.day, 
                          &emp.join_date.month, 
                          &emp.join_date.year) != 3) return 1;

    printf("\nOutput:\n");
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n", 
           emp.name, 
           emp.id, 
           emp.join_date.day, 
           emp.join_date.month, 
           emp.join_date.year);

    return 0;
}