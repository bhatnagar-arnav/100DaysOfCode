//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene
*/
#include <stdio.h>
int main()
{int a,b,c;
    printf("Enter sides of triangle: \n");
    scanf("%d %d %d",&a,&b,&c);
     if (a==b&&b==c&&c==a)
     {printf("equilateral triangle");
     
        }
           else if(a==b||b==c|| c==a)
     {
     printf("Isoceles triangle");
     }
     else if(a!=b&&b!=c&&c!=a)
     {
     printf("Scalene triangle");
     }
return 0;

}