//Topic:1. Write a program to calculate sum of first N natural number.
#include <stdio.h>

int main()
{

 int n,sum=0;
 printf("Enter value of n:");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
    sum=sum+i;
 }
 printf("Sum of first %d natural numbers is %d",n,sum);
 return 0;

}