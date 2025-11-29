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
int main() {
    char str[100];
    printf("Enter a string : \n");
    fgets(str,sizeof(str),stdin);
    int length = strlen(str);
    printf("%c",str[0]);
    for(int i=0;i<length;i++)
    {
      if(str[i]==' ')
      printf("%c",str[i]);

    }

    return 0;
}