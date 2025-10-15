//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    if (scanf("%s", str) != 1) return 1;
    
    length = strlen(str);

    for (int i = 0; i < length; i++) {
        
        for (int j = i; j < length; j++) {
            
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            
            if (!(i == length - 1 && j == length - 1)) {
                printf(", ");
            }
        }
    }
    printf("\n");

    return 0;
}