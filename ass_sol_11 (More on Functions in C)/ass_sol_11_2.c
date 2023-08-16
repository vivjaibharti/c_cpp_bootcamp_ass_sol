//Topic:2. Write a function to calculate HCF of two numbers. (TSRS)
#include <stdio.h>
//#include <limits.h>
int cal_hcf(int,int);

int main()
{
 int a,b;
 printf("Enter value of a and b:");
 scanf("%d%d",&a,&b);
 printf("HCF of %d and %d is %d.\n",a,b,cal_hcf(a,b));
 return 0;
}

int cal_hcf(int x, int y)
{
    int hcf;
    if(x>y)
    {
        for(int i=y;i>=1;i--)
        {
            if(x%i==0 && y%i==0)
            {
                hcf=i;
                break;
            }
        }
    }
    else
    {
        for(int i=x;i>=1;i--)
        {
            if(x%i==0 && y%i==0)
            {
                hcf=i;
                break;
            }
        }
    }
    return hcf;
}