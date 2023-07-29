//Topic:7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.
#include <stdio.h>
//#include <math.h>
int main()
{

 int a,b,c;
 printf("Enter values of a,b,c respectively:");
 scanf("%d%d%d",&a,&b,&c);
 //x=pow(x,2);
 while(a==0)
 {
    printf("Value of a cannot be zero.\nEnter value of a:");
    scanf("%d",&a);
 }
 printf("The input quadratic equation is: %dx^2 + (%dx) + (%d) = 0\n",a,b,c);
 //int d=(pow(b,2))-4*a*c;//It is recommended not to use pow() fun.

//  finding discriminator
 int d=(b*b)-4*a*c;
 printf("d=%d\n",d);
 if(d>0)
 {
    printf("Real and distinct solution.\n");
 }
 else if(d==0)
 {
    printf("One real solution.\n");
 }
 else
 {
    printf("No real solution\n");
 }
 return 0;

}