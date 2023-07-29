//Topic:6. Write a program to print greater between two numbers. Print one number of both are the same.
#include <stdio.h>

int main()
{

 int x,y;
 printf("Enter two numbers:");
 scanf("%d%d",&x,&y);
 if(x>y)
 {
    printf("%d is greater than %d",x,y);
 }
 else if(x==y)
 {
    printf("%d is equal to %d",x,y);
 }
 else{
    printf("%d is greater than %d",y,x);
 }

 return 0;

}