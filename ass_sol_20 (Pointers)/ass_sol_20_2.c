//Topic:2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include <stdio.h>
void swap(char *p, char *q)
{
    char **temp=p;
    p=q;
    q=p;
}
int main()
{
    char *a="Vivek",*b="Aadhyay";
    printf("Before Swapping:a=%s,b=%s %d\n",a,b,c);
    // swap(a,b);
    // printf("After Swapping:a=%s,b=%s",*a,*b);
 

 return 0;

}