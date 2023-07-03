//Topic:4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include <stdio.h>
#include <limits.h>
int main()
{

 int a[10],greatest_value=INT_MIN;
 printf("Enter 10 numbers:");
 for(int i=0;i<10;i++)
 {
    scanf("%d",&a[i]);
    if(greatest_value<a[i])
        greatest_value=a[i];
 }
 printf("Greatest Element of the array is %d",greatest_value);
 return 0;

}