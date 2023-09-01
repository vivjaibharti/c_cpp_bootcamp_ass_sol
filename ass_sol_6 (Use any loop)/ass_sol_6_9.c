//Topic:9. Write a program to calculate LCM of two numbers.
#include <stdio.h>

int main()
{

 int n,m;
 printf("Enter two numbers:");
 scanf("%d%d",&n,&m);

 for(int i=1;;i++)
 {
      if(i%n==0 && i%m==0)
      {
        printf("%d is the LCM of %d and %d.",i,n,m);
        break;
      }
 }
 return 0;

}