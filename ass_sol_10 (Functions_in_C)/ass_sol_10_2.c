//Topic:2. Write a function to calculate simple interest. (TSRS)
#include <stdio.h>
void cal_si(int,int,int);
int main()
{

 int principal,time,rate;
 printf("Enter the value of principal:");
 scanf("%d",&principal);
 printf("Enter the value of time:");
 scanf("%d",&time);
 printf("Enter the value of principal:");
 scanf("%d",&rate);
 cal_si(principal,time,rate);
 return 0;

}

void cal_si(int p,int t,int r)
{
    int si=(p*t*r)/100;
    printf("Siimple Interest on the principal amount=%d, time in years=%d, rate p.a=%d is %d.\n",p,t,r,si);
}