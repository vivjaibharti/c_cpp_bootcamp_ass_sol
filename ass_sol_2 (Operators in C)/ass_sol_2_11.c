/*Topic:11. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and 
digit=9 then the resulting number is 2349)*/
#include <stdio.h>

int main()
{

 int x,digit;
 printf("Enter a number:");
 scanf("%d",&x);
 printf("Enter a one digit number:");
 scanf("%d",&digit);
 printf("The resulted number=%d",(x*10)+digit);

 return 0;

}