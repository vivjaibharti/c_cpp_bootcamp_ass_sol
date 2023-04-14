//Topic:1. Write a function to swap values of two in variables of calling function. (TSRS)
#include <stdio.h>
void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{

    int a=10,b=23;
    printf("Values of a=%d and b=%d before swapping\n",a,b);
    swap(&a,&b);
    printf("Values of a=%d and b=%d after swapping\n",a,b);
 

 return 0;

}