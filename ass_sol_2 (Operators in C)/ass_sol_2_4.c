//Topic:4. Write a program to swap values of two int variables without using a third variable.
#include <stdio.h>

int main()
{

 int x,y;
 printf("Enter the values of x:");
 scanf("%d",&x);
 printf("Enter the values of y:");
 scanf("%d",&y);
 x=x+y;
 y=x-y;
 x=x-y;
 printf("x=%d, y=%d",x,y);


 return 0;

}