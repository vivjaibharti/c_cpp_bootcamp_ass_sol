//Topic:8. Write a program to find the second smallest number in an array.Take array values from the user.

#include <stdio.h>
#define N 5
int main()
{

 int a[N];

 printf("Enter the %d elements of array:",N);

 for(int i=0;i<5;i++)
 {
    scanf("%d",&a[i]);
 }
 
 for (int i=N-1;i>=0;i++)
 {
    for(int j=0;j<=i;j++)
    {
       if(a[j]>a[j+1])
       {
         int temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
       } 
    }
 }
 
 printf("The Sorted Array:");
 for(int i=0;i<N;i++)
 {
    printf("%d ",a[i]);
 }
 printf("\nThe second smallest element in the array is:%d",a[1]);

 return 0;

}