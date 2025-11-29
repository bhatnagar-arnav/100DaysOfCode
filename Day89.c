//Q139: Show that enums store integers by printing assigned values.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/

#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char *status_names[] = {
        "SUCCESS", 
        "FAILURE", 
        "TIMEOUT"
    };

    printf("Output:\n");
    
    for (int i = SUCCESS; i <= TIMEOUT; i++) {
        printf("%s=%d", status_names[i], i);
        
        if (i < TIMEOUT) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}