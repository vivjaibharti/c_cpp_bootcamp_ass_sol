//Topic:4. Write a program to print the first N odd natural numbers
#include <stdio.h>

int main()
{
 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
    printf("%d ",-1+(2*i));
 }

 return 0;

}