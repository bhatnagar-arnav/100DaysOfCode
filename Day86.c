//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID
};

enum Operation get_operation(const char *input) {
    if (strcmp(input, "ADD") == 0) {
        return ADD;
    } else if (strcmp(input, "SUBTRACT") == 0) {
        return SUBTRACT;
    } else if (strcmp(input, "MULTIPLY") == 0) {
        return MULTIPLY;
    }
    return INVALID;
}

int main() {
    char op_str[10];
    int num1, num2;
    int result = 0;
    
    if (scanf("%s %d %d", op_str, &num1, &num2) != 3) {
        printf("Output:\nInvalid input format.\n");
        return 1;
    }

    enum Operation choice = get_operation(op_str);

    switch (choice) {
        case ADD:
            result = num1 + num2;
            break;
        case SUBTRACT:
            result = num1 - num2;
            break;
        case MULTIPLY:
            result = num1 * num2;
            break;
        case INVALID:
            printf("Output:\nInvalid Operation\n");
            return 1;
    }

    printf("Output:\n%d\n", result);

    return 0;
}