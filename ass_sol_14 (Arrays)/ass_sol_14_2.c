//Topic:2. Write a program to calculate the average of numbers stored in an array of size 10.Take array values from the user.
#include <stdio.h>

int main()
{

    int a[10],sum=0;
    float avg;
    printf("Enter Ten numbers:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];  
    }
    avg=sum/10;
    printf("Sum of all the elements in the array is %d \n",sum);
    printf("Average of all the elements in array is %.2f",avg);

 return 0;

}