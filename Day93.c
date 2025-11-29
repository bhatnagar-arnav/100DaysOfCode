//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

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
    int N;
    
    printf("Enter the number of students: ");
    if (scanf("%d", &N) != 1 || N <= 0) return 1;
    
    struct Student students[N];
    float max_marks = -1.0f; 
    int topper_index = -1;
    while(getchar() != '\n'); 
    
    printf("--- Enter Details for %d Students ---\n", N);
    for (int i = 0; i < N; i++)
     {
        printf("Student %d Name: ", i + 1);
        if (fgets(students[i].name, sizeof(students[i].name), stdin) == NULL) return 1;
        remove_newline(students[i].name);
        printf("Student %d Roll, Marks: ", i + 1);
        if (scanf("%d %f", &students[i].roll_no, &students[i].marks) != 2) return 1;
        while(getchar() != '\n'); 
        if (students[i].marks > max_marks) {
            max_marks = students[i].marks;
            topper_index = i;
        }
    }

    printf("\nOutput:\n");
    if (topper_index != -1) 
    {
        printf("Topper: %s (Marks: %.0f)\n", 
               students[topper_index].name, 
               students[topper_index].marks);
    } else {
        printf("No valid records found.\n");
    }

    return 0;
}