/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main()
{int count=1;
   for(int i=1;i<=6;i++)
   {if(i%2==0)
      continue;
      else
   {
      for(int j=3;j>=count;j--)
      {
         printf(" ");
      }
      for(int k=1;k<=i;k++)
      {
         printf("*");
      }
      printf("\n");
      count++;
   }
}
int count2=7,count3=1;
    for(int i=1;i<=7;i++)
    {if(i%2==0)
      {  continue;
      }
      else
      {
        for(int j=1;j<count3;j++)
        {
            printf(" ");
        }
            for(int k=count2;k>=1;k--)
            {
                printf("*"); 
            }
        printf("\n");
        count2=count2-2;
        count3++;
       }
      }


    return 0;
}