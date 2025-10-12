//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>
void reverse_word_segment(char str[], int start, int end) {
    char temp;
    while (start < end) 
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[100];
    int len;

    printf("Enter a sentence: \n");
fgets(sentence, sizeof(sentence), stdin) ;
    len = strlen(sentence);
    int word_start_index = 0;
    for (int i = 0; i <= len; i++)
     {
        if (sentence[i] == ' ' || sentence[i] == '\0') 
        {  
            int word_end_index = i - 1;
            if (word_start_index <= word_end_index) 
            {
                reverse_word_segment(sentence, word_start_index, word_end_index);
        }
            word_start_index = i + 1;
        }
    }

    printf("%s", sentence);

    return 0;
}