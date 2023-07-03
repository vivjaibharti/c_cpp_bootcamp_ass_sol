//Topic:2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include <stdio.h>
void swap(char **p, char **q)
{
    char *temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    char *a="Vivek",*b="Aadhyay";
    printf("Before Swapping: a=%s, b=%s.\n",a,b);
    printf("Address stored in a=%d and Address stored in b=%d\n",*a,*b);
    swap(&a,&b);
    printf("After Swapping:a=%s,b=%s",a,b);
    printf("\nAddress stored in a=%d and Address stored in b=%d",*a,*b);

 

 return 0;

}