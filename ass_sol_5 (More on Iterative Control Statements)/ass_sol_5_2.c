//Topic:2. Write a program to print the first N natural numbers.
#include <stdio.h>

int main()
{

 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 int i=1;
//  while(i<=n)
//  {
//     printf("%d ",i);
//     i++;
//  }
 for(i;i<=n;i++)
 {
    printf("%d ",i);
 }

 return 0;

}