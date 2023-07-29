/*Topic:10. Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340)*/
#include <stdio.h>

int main()
{

 int x;
 scanf("%d",&x);
 printf("Modified numder %d=%d",x,x-(x%10));

 return 0;

}