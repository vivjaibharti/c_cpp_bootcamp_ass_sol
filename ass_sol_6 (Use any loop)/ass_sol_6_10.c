//Topic:10. Write a program to reverse a given number.
#include <stdio.h>
//#include <math.h>
int main()
{

 int n,reverse_number=0;
 printf("Enter value of n:");
 scanf("%d",&n);
    //  int temp=n;
    //  int count=0;
    //  while(temp!=0)
    //  {
    //     printf("inside while loop\n");
    //     temp=temp/10;
    //     count++;
    //  }
    //  for(;count>0;count--)
    //  {
    //     reverse_number=reverse_number+((n%10)*(pow(10,(count-1)))); //error due to power function
    //     n=n/10;
    //     printf("%d\n",reverse_number);
    //  }
    //  printf("%d",reverse_number);

 while(n!=0)
 {
    reverse_number=reverse_number*10+(n%10);
    n=n/10;
 }
 printf("Reversed number is: %d\n",reverse_number);
 return 0;

}