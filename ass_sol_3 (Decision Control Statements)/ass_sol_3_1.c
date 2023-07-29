//Topic:1. Write a peogramme to check whether agiven number is +ve or not.
#include <stdio.h>

int main()
{

 int a;
 printf("Enter a number:");
 scanf("%d",&a);
 if(a>0)
    printf("The number %d is positive.\n",a);
 else
    printf("The number %d is non-positive.\n",a);

 return 0;

}
