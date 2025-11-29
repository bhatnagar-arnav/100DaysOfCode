//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>
#include <stdbool.h>
enum Month {
    JANUARY = 1, 
    FEBRUARY,    
    MARCH,       
    APRIL,       
    MAY,         
    JUNE,        
    JULY,        
    AUGUST,      
    SEPTEMBER,   
    OCTOBER,     
    NOVEMBER,   
    DECEMBER     
};
int getDaysInMonth(enum Month month) {
    switch(month) {
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            return 31;
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            return 30;
        case FEBRUARY:
            return 28; 
            
        default:
            return 0;
            
    }
}

int main() {
    char *month_names[] = {
        "JANUARY", "FEBRUARY", "MARCH", "APRIL", 
        "MAY", "JUNE", "JULY", "AUGUST", 
        "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"
    };

    printf("--- Days in Each Month ---\n");
    for (int month_val = JANUARY; month_val <= DECEMBER; month_val++) {
        int days = getDaysInMonth(month_val);
        printf("%-10s = %d ", month_names[month_val - 1], days);

        if (month_val == FEBRUARY) {
            printf("or 29 days (Leap Year)");
        }
        
        printf("\n");
    }

    return 0;
}
