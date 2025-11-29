//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char longest_word[100];
    int max_length = 0;
    int current_length = 0;
    int start_index = 0; 
    int max_start_index = 0; 
    int len;
printf("Enter a string : \n");
    fgets(sentence, sizeof(sentence), stdin);
    
    sentence[strcspn(sentence, "\n")] = 0; 
    len = strlen(sentence);

    for (int i = 0; i <= len; i++) {
        
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            
            current_length = i - start_index;
            
            if (current_length > max_length) {
                max_length = current_length;
                max_start_index = start_index; 
            }
            
            start_index = i + 1;
        }
    }

    for (int i = 0; i < max_length; i++) {
        longest_word[i] = sentence[max_start_index + i];
    }
    longest_word[max_length] = '\0';

    printf("%s\n", longest_word);

    return 0;
}