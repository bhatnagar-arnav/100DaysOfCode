//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/

#include <stdio.h>
enum Day {
    SUNDAY,    
    MONDAY,    
    TUESDAY,  
    WEDNESDAY, 
    THURSDAY,   
    FRIDAY,    
    SATURDAY   
};

int main() {
    char *day_names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", 
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    printf("Output:\n");
    for (int i = SUNDAY; i <= SATURDAY; i++) 
    {
        printf("%s = %d\n", day_names[i], i);
    }

    return 0;
}