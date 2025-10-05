//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>
#include<string.h>
int main() {
    int count=0;
    printf("Enter a string : \n");
    char str[100];
    scanf("%s", str);
    for(int i=0;str[i] !='\0' ;i++)
    {
        count++;
    }
    printf("%d",count);
    return 0;
}
