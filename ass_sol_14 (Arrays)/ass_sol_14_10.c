//Topic:10. Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include <stdio.h>
#define n 5
int main()
{

 int a[n];
 int b[n];
 printf("Enter %d elements in array:",n);
 for(int i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 
 for(int i=0;i<n;i++)
 {
    b[i]=a[i];
 }

 printf("Array b:");
 for(int i=0;i<n;i++)
 {
    printf("%d ",b[i]);
 }

 return 0;

}