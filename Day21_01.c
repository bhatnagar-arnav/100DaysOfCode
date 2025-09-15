//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include<stdio.h>


int main()
{
    int n, num, first, last, digits,  swapped=0;
    printf("Enter a number \n");
    scanf("%d", &n);
    num = n;
digits = 0;
while (num != 0) {
    num /= 10;
    digits++;
}

if (digits == 1) {
    printf("%d\n", n);
    return 0;
}

int pow = 1;
for (int i = 1; i < digits; i++) {
    pow *= 10;
}
first = n / pow;
last = n % 10;
int middle = (n % pow) / 10;

swapped = last * pow + middle * 10 + first;

printf("%d\n", swapped);

    return 0;
}