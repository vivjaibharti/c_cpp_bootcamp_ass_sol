//Topic:5. Write a program to input a three-digit number and display the sum of the digits.
// Make a common programme to get sum of digits of any n digits number??
#include <stdio.h>

int main()
{

 int x;
 printf("Enter a three digit number:");
 scanf("%d",&x);
 printf("Sum of the three digit no. x is=%d",(x%10)+(x/10)%10+(x/10)/10);

 return 0;

}