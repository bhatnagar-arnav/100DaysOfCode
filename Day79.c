//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    int current_number;
    int count = 0;
    long long sum = 0; 
    float average = 0.0;
    char filename[] = "numbers.txt";
    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        printf("Error: Could not open file '%s'. Please ensure it exists.\n", filename);
        return 1;
    }
    while (fscanf(file_ptr, "%d", &current_number) == 1) {
        sum += current_number;
        count++;
    }
    fclose(file_ptr);
    printf("Output:\n");
    if (count > 0) {
        average = (float)sum / count; 
        
        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("The file is empty or contains no valid integers.\n");
    }

    return 0;
}