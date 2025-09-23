//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {
int n , count[10]={0},max_count=0,max_freq_digit;
printf("Enter number: ");
scanf(" %d",&n);

while(n!=0)
{
    int d = n%10;
        n = n/10;
        count[d]++;
}
for(int i=0;i<10;i++)
{
    if(count[i]>max_count)
    {
        max_count=count[i];
        max_freq_digit=i;
    }

}
 printf("The most frequent digit is: %d\n", max_freq_digit);
    
    return 0;
}