//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    
    if (fgets(name, sizeof(name), stdin) == NULL) return 1;
    
    name[strcspn(name, "\n")] = 0; 
    
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] != ' ') {
            printf("%c.", toupper(name[i]));
            break; 
        }
    }

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c.", toupper(name[i + 1]));
        }
    }

    printf("\n");
    return 0;
}