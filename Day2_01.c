//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>  

int main() {
    int length, breadth, area=0 , peri=0;
    printf("Enter length :\n ");
    scanf("%d", &length);
    printf("Enter breadth: \n");
    scanf("%d", &breadth);
    area = length * breadth;
    peri = 2 * (length + breadth);
    printf("Area=%d, Perimeter=%d\n", area, peri);
    return 0;
}
