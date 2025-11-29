//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int main()
{

    int n,result=0,count=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    int temp =n;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
     temp = n;
        while(temp!=0)
        {
            int d= temp%10;
            int power=1;
            for(int i=0;i<count;i++)
            power=power*d;
            result=result+power;
            temp= temp/10;

        }
    
    if(n==result)
    printf("Armstrong number");
    
    else
    printf("Not an Armstrong number");
    
            return 0;
}