//Topic:2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include <stdio.h>
#include <limits.h>
#define N 5

int smallest_fun(int b[],int m)
{
    int number=INT_MAX;
    for(int i=0;i<m;i++)
    {
        if(number>b[i])
        {
            number=b[i];
        }
    }
    return number;
}

void display(int b[],int m)
{
    printf("The Array is:");
    for(int i=0;i<m;i++)
    {
        printf("%d ",b[i]);
    }
}
int main()
{

 int a[N];
 printf("Enter %d Integer Values\n",N);
 for(int i=0;i<N;i++)
 {
    scanf("%d",&a[i]);
 }
 display(a,N);
 printf("\nThe Smallest number in array is:%d",smallest_fun(a,N));
 return 0;

}