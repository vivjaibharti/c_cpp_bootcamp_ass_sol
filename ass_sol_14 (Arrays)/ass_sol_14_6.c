//Topic:6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include <stdio.h>

int main()
{
 int a[10];
 printf("Enter 10 numbers");

 for(int i=0;i<10;i++)
 {
    scanf("%d",&a[i]);
 }

 for(int i=10-1;i>=0;i++)
 {
    for(int j=0;j<i;j++)
    {
        if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;

        }
    }
 }
 printf("The Sorted Array is \n");
 for(int i=0;i<10;i++)
 {
    printf("%d ",a[i]);
 }
 return 0;

}