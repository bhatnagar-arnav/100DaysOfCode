//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
void remove_newline(char *str)
{
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}
bool are_structs_identical(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) != 0) {
        return false;
    }
    if (s1.roll_no != s2.roll_no) {
        return false;
    }
    if (s1.marks != s2.marks) {
        return false;
    }
    return true; 
}

int main() {
    struct Student s1, s2;

    printf("Enter Name for Student 1: ");
    if (fgets(s1.name, sizeof(s1.name), stdin) == NULL) return 1;
    remove_newline(s1.name);
    
    printf("Enter Roll and Marks for Student 1: ");
    if (scanf("%d %f", &s1.roll_no, &s1.marks) != 2) return 1;
    while(getchar() != '\n'); 
    printf("Enter Name for Student 2: ");
    if (fgets(s2.name, sizeof(s2.name), stdin) == NULL) return 1;
    remove_newline(s2.name);
    
    printf("Enter Roll and Marks for Student 2: ");
    if (scanf("%d %f", &s2.roll_no, &s2.marks) != 2) return 1;
    if (are_structs_identical(s1, s2)) {
        printf("Output 1:\nSame\n");
    } else {
        printf("Output 1:\nDifferent\n");
    }

    return 0;
}