//Topic:5. Write a program to check whether a given number is a three-digit number or not. 
#include <stdio.h>

int main()
{

 int x;
 printf("Enter a number:");
 scanf("%d",&x);
 if(x/100>0)
 {
    if((x/100)/10==0)
    {
        printf("%d is a three digit number\n",x);
    }
    else
    {
        printf("%d is not a three digit number\n",x);
    }
 }
 else
 {
    printf("%d is not a three digit number\n",x);
 }

 return 0;

}