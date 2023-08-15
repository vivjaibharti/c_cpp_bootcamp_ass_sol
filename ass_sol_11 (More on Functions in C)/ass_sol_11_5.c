//Topic:5. Write a function to print first N prime numbers (TSRN).
#include <stdio.h>
int print_prime(int);
int print_prime(int x)
{
    if(x==1 || (x!=2) && (x&1==0))
        {}
    else if(x&1==1)
        {
            for(int i=2;i<x;i++)
            {
                if(x%i==0)
                {
                    printf("%d is a non-prime number.\n",x);
                    return;
                }
            }
           printf("%d is a prime number.\n",x);
        }
    else
    {
        printf("%d is a prime no.\n",x);
    }
}
int main()
{
 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
    printf("%d ",print_prime(i));
 }
 return 0;
}