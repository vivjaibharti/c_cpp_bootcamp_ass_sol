//Topic:5. Write a function to print first N prime numbers (TSRN).
#include <stdio.h>
int print_prime(int);
int print_prime(int x)
{
    if(x==1 || (x!=2 && x%2==0))
        {
            return 0;
        }
    else if((x&1)==1)
        {
            for(int i=2;i<x;i++)
            {
                if(x%i==0)
                {
                    return 0;
                }
            }
           return x;
        }
    else
    {
        return 2;
    }
}
int main()
{
 int n,count=0;
 printf("Enter value of n:");
 scanf("%d",&n);
 for(int i=1;;i++)
 {
        int x=print_prime(i);
        if(x!=0)
        {
            printf("%d ",x);
            count++;
        }
        if(count==n)
        {
            break;
        }
 }
 return 0;
}