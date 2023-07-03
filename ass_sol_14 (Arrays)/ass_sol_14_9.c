//Topic:9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.
#include <stdio.h>

int main()
{

 int a[5];

 printf("Enter 5 numbers:");
 for(int i=0;i<5;i++)
 {
    scanf("%d",&a[i]);
 }

 printf("Raw Array:");

 for(int i=0;i<5;i++)
 {
    printf("%d ",a[i]);
 }

 //loop for printing array in reverse order.

 printf("\nArray in reverse order:");
 for(int i=5-1;i>=0;i--)
 {
    printf("%d ",a[i]);
 }

 return 0;

}