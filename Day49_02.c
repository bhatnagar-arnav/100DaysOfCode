//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int len, last_space_index = -1;

    fgets(name, sizeof(name), stdin); 
    
    name[strcspn(name, "\n")] = 0; 
    len = strlen(name);
    
    for (int i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            last_space_index = i;
            break;
        }
    }
    
    if (last_space_index == -1) {
        printf("%s\n", name);
        return 0;
    }
    
    int i = 0;
    while (name[i] == ' ') i++;
    printf("%c.", toupper(name[i]));
    
    for (i = 1; i < last_space_index; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c.", toupper(name[i + 1]));
        }
    }
    
    printf(" %s\n", &name[last_space_index + 1]);

    return 0;
}