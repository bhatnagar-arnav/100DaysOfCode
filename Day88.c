//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN,
    MAX_LIGHTS
};

int main() {
    char *light_names[] = {
        "RED", 
        "YELLOW", 
        "GREEN"
    };

    for (int i = 0; i < MAX_LIGHTS; i++) {
        printf("%s=%d\n", light_names[i], i);
    }

    return 0;
}