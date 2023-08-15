//Topic:4. Write a function to find the next prime number of a given number. (TSRS) 
#include <stdio.h>
int next_prime(int);
int next_prime(int x)
{
    for(int i=x;;i++)
    {
        if((i+1)!=1 && (i+1)!=2 && (i+1)%2==0)
        {}
        else if((i+1)&1==1)
        {
            int flag=0;
            for(int j=3;j<(i+1);j++)
            {
                if((i+1)%j==0)
                {
                    flag++;
                    break;
                }
            }
            if(flag==1);
            else
                return (i+1);
        }
        else
        {
            return 2;
        }
    }
}
int main()
{

 int n;
 printf("Enter a number:");
 scanf("%d",&n);
 printf("%d is the next prime number after %d.\n",next_prime(n),n);
 return 0;

}