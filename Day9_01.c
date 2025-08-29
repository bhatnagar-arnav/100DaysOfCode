//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex
*/

#include <stdio.h>
#include <math.h>
void main()
{
    float a ,b,c,d=0,r1=0,r2=0;
    printf(" Enter quadratic equation \n");
    scanf("%f %f %f",&a,&b,&c);
    d= b*b- 4*a*c;
    if(d>0)
    {
        r1= (-b+ sqrt((b*b-4*a*c)))/(2*a);
        r2=(-b- sqrt((b*b-4*a*c)))/(2*a);
        printf("Roots real and different: %f %f", r1,r2);
    }
        else if(d==0)
    {
        r1= -b / (2*a);
        printf("Roots are equal: %f",r1);
    }
    else if (d<0)
    printf("Roots are complex");
}