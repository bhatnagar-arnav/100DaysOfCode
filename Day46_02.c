//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int seen[26] = {0}; 
    char first_repeating = '\0'; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin) ;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (islower(ch)) {
            int index = ch - 'a'; 

            if (seen[index] > 0) {
                first_repeating = ch;
                break; 
            }
            
            seen[index]++;
        }
    }

    if (first_repeating != '\0') {
        printf("Output:\n%c\n", first_repeating);
    } else {
        printf("Output:\nNo repeating lowercase alphabet found.\n");
    }

    return 0;
}