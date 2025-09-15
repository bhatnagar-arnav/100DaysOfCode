//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>
int main()
{
    float cp, sp , profit, loss; float profit_per=0,loss_per=0;
    printf("Enter Cost price and Selling price \n");
    scanf("%f %f",&cp,&sp);
    if(sp>cp)
    {  
        profit=sp-cp;
        profit_per=(profit/cp)*100;
        printf("Profit %.0f%%",profit_per);
    }
    else if(cp>sp)
    {
        loss=cp-sp;
        loss_per=(loss/cp)*100;
        printf("Loss %.0f%%",loss_per);
    }
    else
    printf("No profit No loss");
    return 0;
    
}