//Topic:1. Write a recursive function to print first N natural numbers.
#include <stdio.h>
void print_natural(int);
void print_natural(int x)
{
    if(x==0)
    {
        return;
    }
    print_natural(x-1);
    printf("%d ",x);
}

int main()
{

 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 print_natural(n);
 return 0;

}
