//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void change_date_format(char *date_str) {
    char month_num[3];
    int month_index = -1;
    char *month_abbr = NULL;

    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    if (date_str[2] == '/') {
        month_index = 3; 
    } else {
        return;
    }
    
    month_num[0] = date_str[month_index];
    month_num[1] = date_str[month_index + 1];
    month_num[2] = '\0';
    
    int month_val = atoi(month_num);
    if (month_val >= 1 && month_val <= 12) {
        month_abbr = months[month_val - 1];
    } else {
        return;
    }
    
    char day[3], year[5];
    
    strncpy(day, date_str, 2);
    day[2] = '\0';
    
    strncpy(year, &date_str[6], 4);
    year[4] = '\0';
    
    sprintf(date_str, "%s-%s-%s", day, month_abbr, year);
}

int main() {
    char date_input[100];

    printf("Enter the date in dd/mm/yyyy format: ");
    if (scanf("%s", date_input) != 1) return 1;

    change_date_format(date_input);

    printf("Output:\n%s\n", date_input);

    return 0;
}
