//Topic:3. Write a program to calculate sum of first N odd natural numbers.
#include <stdio.h>

int main()
{

 int n,sum=0;
 printf("Enter value of n:");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
    sum=sum+(-1+(2*i));
 }
 printf("Sum of first %d odd natural numbers is %d",n,sum);

 return 0;

}