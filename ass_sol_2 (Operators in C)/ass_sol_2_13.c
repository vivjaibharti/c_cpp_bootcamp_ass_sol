/*Topic:13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right*/
#include <stdio.h>

int main()
{

 int x,y;
 printf("Enter 3 digit number:");
 scanf("%d",&x);
 y=(x%10)*100+((x/10)%10)*10+(x/100)*1;
 printf("The required no. after rotating of %d= %d\n",x,y);
 return 0;

}