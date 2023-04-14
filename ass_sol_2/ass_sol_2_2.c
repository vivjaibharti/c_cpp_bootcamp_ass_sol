//Topic:2. Write a program to print a given number without its last digit
#include <stdio.h>

int main()
{

 int x;
 printf("Enter the value of x:");
 scanf("%d",&x);
 printf("%d without its last digit %d",x,x/10);

 return 0;

}