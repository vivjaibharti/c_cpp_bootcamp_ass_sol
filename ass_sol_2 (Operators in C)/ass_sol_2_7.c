//Topic:7. Write a program to find the position of first 1 in LSB.
#include <stdio.h>

int main()
{
 int x,result,count=0;
 printf("Enter a number:");
 scanf("%d",&x);
    result=x&1;//Using bitwise operator &.
    printf("%d\n",result);
    count++;
  while (result==0)
    {
        x=x>>1;
        result=x&1;
        count++;
    }
 printf("Position of first 1 in LSB is %d",count);
 return 0;
}