//Topic:7. Write a program to count digits in a given number.
#include <stdio.h>

int main()
{

 int n,count=0;
 printf("Enter value of n:");
 scanf("%d",&n);
 while(n!=0)
 {
    n=n/10;
    count++;
 }
 printf("The number is %d digit number.\n",count);
 return 0;

}