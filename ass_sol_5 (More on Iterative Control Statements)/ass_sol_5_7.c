//Topic:7. Write a program to print the first N even natural numbers in reverse order.
#include <stdio.h>

int main()
{

 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 for(int i=n;i>0;i--)
 {
    printf("%d ",2*i);
 }

 return 0;

}