//Topic:15. Write a program to check whether a given number is positive, negative or zero.  
#include <stdio.h>

int main()
{

 int x;
 printf("Enter a number:");
 scanf("%d",&x);
 if(x>0)
 {
    printf("The number %d is a positive integer.\n",x);
 }
 else if(x<0)
 {
    printf("The number %d is negative integer.\n",x);

 }
 else
 {
    printf("%d is zero.\n",x);
 }
 return 0;

}