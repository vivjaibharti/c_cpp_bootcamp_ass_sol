/*Topic:12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.*/
#include <stdio.h>

int main()
{

 float us_dollar=76.23;
 float rupee;
 printf("Enter the amt in rupee:");
 scanf("%f",&rupee);
 float usd=rupee/us_dollar;
 printf("%.2f rupee=%.2f USD",rupee,usd);//printing up to 2 decimal place.

 return 0;

}