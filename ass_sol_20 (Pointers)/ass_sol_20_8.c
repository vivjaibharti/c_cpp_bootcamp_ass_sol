//Topic:8. Write a program to compute the sum of all elements in an array using pointers.
#include <stdio.h>

int main()
{

 int a[10]={1,25,-45,5,1};//Here,the array is initialised with five elements only,the other five elements will be initialised with zero by default.
 int *p=a;
 int sum=0;
 int *b[10]={1,2,3,4,5,6,7,8,9,10};
 int *q=b;
 int add=0;

 for(int i=0;i<10;i++)
 {
    // sum=sum+*(p+i);
    sum=sum+p[i];
    add=add+q[i];
 }

 printf("The sum of the static array a=%d\n",sum);
 printf("The sum of the static array b=%d",add);
 
 return 0;

}