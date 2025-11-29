//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST,
    UNKNOWN
};

enum UserRole get_role_from_string(const char *input) {
    if (strcmp(input, "ADMIN") == 0) {
        return ADMIN;
    } else if (strcmp(input, "USER") == 0) {
        return USER;
    } else if (strcmp(input, "GUEST") == 0) {
        return GUEST;
    }
    return UNKNOWN;
}

int main() {
    char input_role[10];
    enum UserRole current_role;

    if (scanf("%s", input_role) != 1) return 1;

    current_role = get_role_from_string(input_role);

    switch (current_role) {
        case ADMIN:
            printf("Administrator access granted. Full control.\n");
            break;
        case USER:
            printf("Welcome User! Standard features available.\n");
            break;
        case GUEST:
            printf("Welcome Guest! Limited viewing access.\n");
            break;
        case UNKNOWN:
            printf("Error: Role not recognized.\n");
            break;
    }

    return 0;
}