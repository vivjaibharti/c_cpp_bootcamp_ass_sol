//Topic:Pattern_Problem-2.
#include <stdio.h>

int main()
{

 for(int i=1;i<=5;i++)
 {
    for(int j=5;j>=1;j--)
    {
       if(j>i)
       {
        printf(" ");
       }
       else
       {
         char c='*';
         printf("%c",c);
       }   
    }
    printf("\n");
   
 }

 return 0;

}