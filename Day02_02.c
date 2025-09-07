//Q4: Write a program to calculate the area and circumference of a circle given its radius.
/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include<stdio.h>
#define pi 3.14
int main()
{float r, area=0, circ=0;
    printf("Enter radius of circle \n");
scanf("%f",&r);
area = pi *r*r;
circ =2*pi*r;
printf("Area= %f \n",area);
printf("Circumference = %f \n",circ);
return 0;
}