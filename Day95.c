//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

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
struct Student find_topper(struct Student students[], int N) {
    float max_marks = -1.0f; 
    int topper_index = 0;
    for (int i = 0; i < N; i++) {
        if (students[i].marks > max_marks) {
            max_marks = students[i].marks;
            topper_index = i;
        }
    }
    return students[topper_index];
}

int main() {
    int N;
    
    printf("Enter the number of students: ");
    scanf("%d", &N);
    
    struct Student students[N];
    while(getchar() != '\n'); 
    
    printf("--- Enter Details for %d Students (Name Roll Marks) ---\n", N);
    for (int i = 0; i < N; i++) {
        printf("Student %d Name: ", i + 1);
        if (fgets(students[i].name, sizeof(students[i].name), stdin) == NULL) return 1;
        remove_newline(students[i].name);
        
        printf("Student %d Roll, Marks: ", i + 1);
        if (scanf("%d %f", &students[i].roll_no, &students[i].marks) != 2) return 1;
        while(getchar() != '\n'); 
    }
    struct Student topper = find_topper(students, N);
    printf("\nOutput:\n");
    printf("Top Student: %s | Roll: %d | Marks: %.0f\n", 
           topper.name, topper.roll_no, topper.marks);

    return 0;
}