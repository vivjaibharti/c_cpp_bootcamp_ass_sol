//Topic:8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
#include <stdio.h>
int cal_factorial(int);
int cal_permutation(int,int);
int main()
{

 int n,r;
 printf("Enter value of n:");
 scanf("%d",&n);
 printf("Enter value of r:");
 scanf("%d",&r);
 printf("Combination of %dP%d=%d",n,r,cal_permutation(n,r));
 return 0;

}

int cal_permutation(int x,int y)
{
    int permutation=(cal_factorial(x))/(cal_factorial(x-y));
    return permutation;
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