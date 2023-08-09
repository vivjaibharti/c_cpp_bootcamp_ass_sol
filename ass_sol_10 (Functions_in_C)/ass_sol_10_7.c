//Topic:7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include <stdio.h>
int cal_combination(int,int);
int cal_factorial(int);
int main()
{

 int n,r;
 printf("Enter value of n:");
 scanf("%d",&n);
 printf("Enter value of r:");
 scanf("%d",&r);
 printf("Combination of %dC%d=%d",n,r,cal_combination(n,r));
 return 0;

}

int cal_combination(int x,int y)
{
    int combination=(cal_factorial(x))/(cal_factorial(y)*cal_factorial(x-y));
    return combination;
}

int cal_factorial(int x)
{
    int fact=1;
    while(x!=1)
    {
        fact=fact*x;
        x--;
    }
    return fact;
}