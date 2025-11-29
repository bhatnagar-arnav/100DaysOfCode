//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

enum Status get_status_from_string(const char *input) {
    if (strcmp(input, "SUCCESS") == 0) {
        return SUCCESS;
    } else if (strcmp(input, "FAILURE") == 0) {
        return FAILURE;
    } else if (strcmp(input, "TIMEOUT") == 0) {
        return TIMEOUT;
    }
    return FAILURE; 
}

int main() {
    char input_status[20];
    enum Status current_status;

    if (scanf("%s", input_status) != 1) return 1;

    current_status = get_status_from_string(input_status);

    switch (current_status) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status code.\n");
            break;
    }

    return 0;
}