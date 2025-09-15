//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main() {
    int n; float sum=1.0;
    printf("Enter number of terms \n");
    scanf("%d",&n);
    for (int i=2;i<=n;i++)
    {
       sum = sum +((2.0*i-1)/(2*i));
    }
    printf("Approximate sum : %.1f",sum);
    return 0;
}


