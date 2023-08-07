//Topic:5. Write a program to print the first N odd natural numbers in reverse order.
#include <stdio.h>

int main()
{

 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 for(int i=n;i>=1;i--)
 {
    printf("%d ",-1+(2*i));
 }

 return 0;

}