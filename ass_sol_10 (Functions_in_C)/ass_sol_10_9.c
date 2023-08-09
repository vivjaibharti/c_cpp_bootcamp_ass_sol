//Topic:9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include <stdio.h>
int check_digit(int,int);
int main()
{

 int n,x;
 printf("Enter the value of number:");
 scanf("%d",&n);
 printf("Enter the digit for finding:");
 scanf("%d",&x);
 int flag=check_digit(n,x);
 if(flag==1)
 {
    printf("%d contains digit %d.\n",n,x);
 }
 else
 {
    printf("%d does not contains %d.\n",n,x);
 }

 return 0;

}

int check_digit(int x,int y)
{
    int flag=0;
    while(x!=0)
    {
         if(x%10==y)
         {
            flag=1;
            break;
         }
         x=x/10;
    }
    return flag;
}

