//Topic:Pattern_Problem-1.
#include <stdio.h>

int main()
{

 for(int i=1;i<=5;i++)
 {
    for(int j=1;j<=i;j++)
    {
        char c='*';
        printf("%c",c);
        if(j==i)
        {
            printf("\n");
        }

    }
   
 }

 return 0;

}