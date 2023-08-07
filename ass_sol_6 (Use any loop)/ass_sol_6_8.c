//Topic:8. Write a program to check whether a given number is a Prime number or not.
#include <stdio.h>

int main()
{

 int n,count=0;
 printf("Enter value of n:");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
    if(n%i==0)
    {
        count++;
        if(count>=3)
           {
                printf("%d is a non prime number.\n",n);
                break;  
           } 
    }
 }
 if(count==2)
 {
    printf("%d is a prime number.\n",n);
 }
 return 0;

}