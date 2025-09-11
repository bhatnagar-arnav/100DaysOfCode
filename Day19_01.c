//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

  int hcf(int a, int b){
    if(b%a==0)
    return a;
    else
    return hcf(b%a,a);
  }
    int main(){
int a, b;
printf("Enter two numbers \n");
scanf("%d %d",&a,&b);
int lcm=(a*b) / hcf(a,b);
printf("%d \n",lcm);
    
      return 0;
    }