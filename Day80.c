//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
void initialize_file(struct Student students[], int count) {
    FILE *fp = fopen("records.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open file for writing.\n");
        exit(1);
    }
    
    for (int i = 0; i < count; i++)
     {
        fprintf(fp, "%s %d %.2f\n", 
                students[i].name, 
                students[i].roll, 
                students[i].marks);
    }
    fclose(fp);
    printf("--- Data successfully written to records.txt ---\n");
}

void read_and_display_records() {
    FILE *fp;
    struct Student s;

    printf("\n--- Reading Records from File ---\n");
    fp = fopen("records.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return;
    }
    
    printf("Output:\n");
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) 
    {
        printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll, s.marks);
    }
    
    printf("--- Finished reading file ---\n");
    fclose(fp);
}


int main() {
    struct Student sample_students[2] = {
        {"Asha", 101, 85.0f},
        {"Ravi", 102, 92.0f}
    };
    initialize_file(sample_students, 2);
    read_and_display_records();
    
    return 0;
}