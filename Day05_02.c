//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/
#include <stdio.h>
void main ()
{
int time ,hrs,min ,sec;
printf("Enter the time in seconds \n");
scanf("%d",&time);
hrs = time / 3600;
min = (time % 3600) / 60;
sec = time % 60;
printf("%d:%d:%d\n", hrs, min, sec);

}