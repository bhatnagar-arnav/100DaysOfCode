//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main() {

    int N = 5;
    struct Student students[N];
    
    printf("--- Enter Details for %d Students ---\n", N);
    for (int i = 0; i < N; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("  Enter Name: ");
        if (fgets(students[i].name, sizeof(students[i].name), stdin) == NULL) return 1;
        remove_newline(students[i].name);
        printf("  Enter Roll Number: ");
        scanf("%d", &students[i].roll_no);
        while(getchar() != '\n'); 
        printf("  Enter Marks: ");
        if (scanf("%f", &students[i].marks) != 1) return 1;
        while(getchar() != '\n'); 
    }
    printf("\n--- Output: All Student Records ---\n");
    printf("| %-5s | %-20s | %-5s |\n", "ROLL", "NAME", "MARKS");
    printf("|-------|----------------------|-------|\n");
    
    for (int i = 0; i < N; i++) {
        printf("| %-5d | %-20s | %-5.1f |\n", 
               students[i].roll_no, 
               students[i].name, 
               students[i].marks);
    }
    printf("------------------------------------\n");

    return 0;
}