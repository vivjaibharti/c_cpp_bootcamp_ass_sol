//Topic:3. Write a program to swap values of two int variables.
#include <stdio.h>

int main()
{
 int x,y,a;
 printf("Enter the values of x:");
 scanf("%d",&x);
 printf("Enter the values of y:");
 scanf("%d",&y);
 a=x;
 x=y;
 y=a;
printf("Value of x:%d and y:%d",x,y);

return 0;

}