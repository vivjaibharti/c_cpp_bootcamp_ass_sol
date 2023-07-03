//Topic:1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include <stdio.h>
#include <limits.h>
#define N 5
int greatest_no(int b[],int m)
{
    int number=INT_MIN;
    for(int i=0;i<m;i++)
    {
        if(number<b[i])
        {
            number=b[i];
        }
    }
    return number;
}
int main()
{

 int a[N];
 printf("Enter %d integer values:",N);
 for(int i=0;i<N;i++)
 {
    scanf("%d",&a[i]);
 }
 printf("The greatest number of the array is:%d",greatest_no(a,N));

 return 0;

}