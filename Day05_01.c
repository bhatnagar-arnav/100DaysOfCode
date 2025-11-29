//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/
#include <stdio.h>
#include <math.h>
void main()
{int prin, rate , time ; float si=0,ci=0;
    printf("Enter Principal , rate , time \n");
    scanf("%d %d %d",&prin,&rate,&time);
    si=(prin*rate*time)/100.0;
    ci=prin*(pow((1+(rate/100.0)),time)) - prin;
    printf("Simple Interest = %f \n",si);
    printf("Compound Interest = %f \n", ci);

}