//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
     int n,pro= 1;
    printf(" Enter a number \n");
    scanf("%d",&n);
    while(n!=0)
    {
        int d= n%10;
        n=n/10;
      if (d%2!=0)
      pro=pro*d;

    }
    if(pro==1)
    printf("%d (no odd digit ,assume 1)",pro);
    else
    printf("%d",pro);
    return 0;
}