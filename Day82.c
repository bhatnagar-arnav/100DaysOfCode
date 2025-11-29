//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
enum TrafficLight {
    RED,    
    YELLOW, 
    GREEN   
};

enum TrafficLight get_light_state(const char *input) {
    if (strcmp(input, "RED") == 0) {
        return RED;
    } else if (strcmp(input, "YELLOW") == 0) {
        return YELLOW;
    } else if (strcmp(input, "GREEN") == 0) {
        return GREEN;
    }
    return RED; 
}

int main() {
    char input_color[10];
    enum TrafficLight current_light;

    printf("Enter the traffic light color (RED, YELLOW, or GREEN): ");
    if (scanf("%s", input_color) != 1) return 1;

    current_light = get_light_state(input_color);

    printf("Output:\n");
    switch (current_light) 
    {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid Light State\n");
            break;
    }

    return 0;
}