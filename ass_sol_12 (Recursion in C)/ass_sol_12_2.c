//Topic:2. Write a recursive function to print first N natural numbers in reverse order.
#include <stdio.h>
void print_reverse(int);
void print_reverse(int x)
{
    if(x==0)
    {
        return;
    }
    printf("%d ",x);
    print_reverse(x-1);
}
int main()
{
 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 print_reverse(n);
 return 0;
}