//Topic:8. Write a program to print squares of the first N natural numbers
#include <stdio.h>

int main()
{

 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 int i=1;
 while(n!=0)
 {
   printf("%d ",i*i);
   i++;
   n--;
 }

 return 0;

}