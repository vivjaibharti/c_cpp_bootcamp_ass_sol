//Topic:6. Write a program to print the first N even natural number.
#include <stdio.h>

int main()
{

 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 int i=1;
 while(n>=1)
 {
    printf("%d ",2*i);
    i++;
    n--;
 }

 return 0;

}