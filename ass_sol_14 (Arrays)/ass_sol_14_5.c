//Topic:5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
#include <stdio.h>
#include <limits.h>
int main()
{

 int a[10],smallest_value=INT_MAX;
 printf("Enter 10 numbers:");
 for(int i=0;i<10;i++)
 {
    scanf("%d",&a[i]);
    if(smallest_value>a[i])
        smallest_value=a[i];
 }
 printf("Smallest Element of the array is %d",smallest_value);
 return 0;

}