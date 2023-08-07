//Topic:4. Write a program to calculate HCF of two numbers.
#include <stdio.h>

int main()
{

 int x,y,i,hcf;
 printf("Enter value of x:");
 scanf("%d",&x);
 printf("Enter value of y:");
 scanf("%d",&y);
 if(x>y)
 {
    i=y;
 }
 else{
    i=x;
 }
 for(int j=1;j<=i;j++)
 {
    if(x%j==0 && y%j==0)
    {
        hcf=j;
    }
 }
 printf("HCF of %d and %d is %d.\n",x,y,hcf);
 return 0;

}