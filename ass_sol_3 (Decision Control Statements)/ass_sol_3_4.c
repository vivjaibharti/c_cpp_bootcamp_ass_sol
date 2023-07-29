//Topic:4. Write a program to check whether a given number is an even number or an odd number without using % operator.
#include <stdio.h>

int main()
{

 int x;
 printf("Enter a number:");
 scanf("%d",&x);
 //using bitwise operator.
 if((x&1)==0)
 {
    printf("%d is an even number\n",x);
 }
 else{
      printf("%d is a odd number\n",x);

 }

 return 0;

}