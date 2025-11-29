//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}
void write_record(const char *filename, const struct Employee *emp) {
    FILE *fp;
    fp = fopen(filename, "wb"); 
    if (fp == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }
    fwrite(emp, sizeof(struct Employee), 1, fp);
    
    fclose(fp);
    printf("Record written successfully to %s.\n", filename);
}
void read_record(const char *filename) {
    FILE *fp;
    struct Employee read_emp;
    
    fp = fopen(filename, "rb"); 
    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return;
    }

    printf("\nOutput: Data Read from File\n");
    size_t records_read = fread(&read_emp, sizeof(struct Employee), 1, fp);
    
    if (records_read == 1) {
        printf("ID: %d | Name: %s | Salary: $%.2f\n", 
               read_emp.id, read_emp.name, read_emp.salary);
    } else {
        printf("No records found in the file.\n");
    }
    
    fclose(fp);
}

int main() {
    struct Employee emp1;
    char filename[] = "employee_data.txt";

    printf("--- Enter Employee Data ---\n");
    printf("Enter ID: ");
    scanf("%d", &emp1.id);
    while(getchar() != '\n'); 
    printf("Enter Name: ");
    if (fgets(emp1.name, sizeof(emp1.name), stdin) == NULL) return 1;
    remove_newline(emp1.name);

    printf("Enter Salary: ");
    scanf("%f", &emp1.salary);
    write_record(filename, &emp1);
    read_record(filename);

    return 0;
}