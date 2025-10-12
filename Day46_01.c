//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/  
#include <stdio.h>
#include <string.h>
#include <stdbool.h> 
bool is_vowel(char ch) 
{
    if (ch >= 'A' && ch <= 'Z')
     {
        ch = ch + 32; 
    }
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int main()
 {
    char str[100]; 
    char temp_str[100]; 
    int i; 
    int j = 0; 
     printf("Enter a string : \n");
    fgets(str, sizeof(str), stdin);
     int length = strlen(str);
    for (i = 0; i< length ; i++) 
    {
        if (!is_vowel(str[i])) {
            temp_str[j] = str[i];
            j++; 
        }
    }
    temp_str[j] = '\0'; 
    strcpy(str, temp_str);
    printf("%s\n", str);
    
    return 0;
}