//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>
#include <string.h>
int main() {
    char str[100]; char ch;
    printf("Enter a string : \n");
    fgets(str,sizeof(str),stdin);
    int length = strlen(str);
    for(int i=0;i<length ; i++)
    {
        ch = str[i];
        if(ch>='A'&& ch<='Z')
        str[i]= ch + 32;
        else if(ch>='a' && ch<= 'z')
        str[i]= ch - 32;
    }
printf("%s", str);
    return 0;
}