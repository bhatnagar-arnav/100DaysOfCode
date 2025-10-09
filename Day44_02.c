//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter a string : \n");
    fgets(str, sizeof(str), stdin) ;
    int length = strlen(str); 

    for (int i = 0; i < length; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        if (str[i] == '\n') {
            str[i] = '\0';
        }
    }

    printf("Output:\n%s\n", str);

    return 0;
}