//Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/

#include <stdio.h>

enum Numbers {
    A = 10,
    B,
    C,
    D,
    E
};

int main() {
    char *names[] = {"A", "B", "C", "D", "E"};

    printf("Output:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("%s = %d\n", names[i], A + i);
    }
    
    return 0;
}