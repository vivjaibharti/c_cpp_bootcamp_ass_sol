//Topic:3. Write a function to check whether a given number is Prime or not. (TSRS) 
#include <stdio.h>
void check_prime(int);
void check_prime(int x)
{
    if(x==1 || (x!=2) && (x%2==0))
        {
            printf("%d is a non-prime no.\n",x);
            return;
        }
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
 check_prime(n);
 return 0;

}