//Topic:9. Write a program to print the elements of an array in reverse order using pointer.
#include <stdio.h>

int main()
{

 int a[5]={14,13,12,11,10};
 int *p=a;

 printf("The array before reverse:");
 for(int i=0;i<5;i++)
 {
    printf("%d ",*(p+i));
 }

 printf("\nThe array printing in reverse order:");
 for(int i=4;i>=0;i--)
 {
    printf("%d ",*(p+i));
 }

 return 0;

}