//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

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
int result=hcf(a,b);
printf("%d \n",result);
    
      return 0;
  }