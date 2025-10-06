//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int length;
    printf("Enter a string: ");
    scanf("%s", str); 
    length = strlen(str);
    int i = 0;
    int j = length - 1;
    char temp;
    while (i < j) 
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Output:\n%s\n", str);
    return 0;
}