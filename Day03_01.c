//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212
*/
#include <stdio.h>
void main()
{
float cel= 0.0 ,farh=0.0;
printf("Enter temperature in celcius : \n");
scanf("%f", &cel);
farh= (cel*9/5)+32;
printf("Temperature in Fahrenhiet : %f",farh);

}