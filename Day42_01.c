//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main() {
    char str[100];
    int vowel=0,consonants=0;
    printf("Enter a string :\n");
    scanf("%s", str);
   int length =strlen(str);
    for(int i=0; i<length ; i++)
    {str[i]=tolower(str[i]);
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        vowel++;
        else
        consonants++;
    }
    printf("VOWEL = %d , CONSONANT = %d ",vowel,consonants);
    return 0;
}