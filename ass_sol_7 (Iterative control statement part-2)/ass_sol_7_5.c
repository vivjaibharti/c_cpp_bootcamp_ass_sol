//Topic:5. Write a program to check whether two given numbers are co-prime numbers or not.
#include <stdio.h>

int main()
{

 int x,y,flag=0;
 printf("Enter value of x:");
 scanf("%d",&x);
 printf("Enter value of y:");
 scanf("%d",&y);
 for(int i=2;i<=((x>y)?y:x);i++)
 {
    if(x%i==0 && y%i==0)
    {
        flag=1;
        printf("%d and %d are not co-prime.",x,y);
        break;
    }
 }
 if(flag==0)
    printf("%d and %d are co-prime.",x,y);

 return 0;

}