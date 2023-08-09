//Topic:6. Write a function to calculate the factorial of a number. (TSRS) 
#include <stdio.h>
int cal_factorial(int);
int main()
{

 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 printf("Factorial of %d is %d.\n",n,cal_factorial(n));
 return 0;

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