//Topic:3. Write a program to print the first N natural numbers in reverse order.
#include <stdio.h>

int main()
{

 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 while(n>=1)
 {
    printf("%d ",n);
    n--;
 }

 return 0;

}