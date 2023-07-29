/*Topic:8. Write a program to check whether the given number is even or odd using a bitwise operator.*/
#include <stdio.h>

int main()
{
/*  Method 1:
 unsigned int x;
 printf("Enter a positive integer:");
 scanf("%u",&x);
 if(x&1==0)
 {
    printf("x is even");

 }
 else
 {
    printf("x is odd.");
 }
 printf("\nSize of x is %u bytes.",sizeof(x));
*/
//Method-2
 int x,result;
 printf("Enter a positive integer:");
 scanf("%u",&x);
 result=x&1;
 if(result==1)
    printf("%d is odd\n",x);
 else
    printf("%d x is even\n",x);

 return 0;

}