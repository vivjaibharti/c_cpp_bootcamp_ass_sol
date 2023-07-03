//Topic:5. Write a program to find the maximum number between two numbers using a pointer
#include <stdio.h>

int main()
{

 int a=10,b=50;
 int *p,*q;
 p=&a;
 q=&b;

 if(*p>*q)
 {
    printf("The maximum of two is:%d.",*p);
 }
 else
 {
     printf("The maximum of two is:%d.",*q);
 }
 
 return 0;

}