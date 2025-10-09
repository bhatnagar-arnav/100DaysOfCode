//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>
#include <string.h>
int main() {
    char ch,str[100];
    int count =0;
printf("Enter a string : \n");
    fgets(str,sizeof(str),stdin);
printf("Enter a character : \n");
    scanf("%c",&ch);

int length = strlen(str);
    for(int i=0;i<length;i++)
    {
        if(str[i]==ch)
        count ++;
    }
    printf("%d",count);
    return 0;
}