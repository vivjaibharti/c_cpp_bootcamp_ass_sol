//Topic:6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include <stdio.h>
void print_prime(int,int);

void print_prime(int x, int y)
{
    for(int i=x+1;i<=y-1;i++)
    {
        if(i==1 || (i!=2 && i%2==0))
        {

        }
        else if((i&1)==1)
        {
            int flag=0;
            for(int j=3;j<i;j++)
            {
                if(i%j==0)
                {
                    flag++;
                    break;
                }
                
            }
            if(flag!=1)
            {
                printf("%d ",i);
            }
        }
        else
        {
            printf("%d ",i);
        }
        // printf("i=%d,",i);
    }
}

int main()
{
    
 int n,m;
 printf("Enter value of n:");
 scanf("%d",&n);
 printf("Enter value of m:");
 scanf("%d",&m);
 print_prime(n,m);
 return 0;

}