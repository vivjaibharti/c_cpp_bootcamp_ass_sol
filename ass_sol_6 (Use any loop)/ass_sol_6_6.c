//Topic:6. Write a program to calculate factorial of a number.
#include <stdio.h>

int main()
{

 int n,factorial=1;
 printf("Enter value of n:");
 scanf("%d",&n);
 if(n==0)
 {
    factorial=1;
 }
 else
 {
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
 }
 printf("Factorial of %d is %d",n,factorial);
 return 0;

}