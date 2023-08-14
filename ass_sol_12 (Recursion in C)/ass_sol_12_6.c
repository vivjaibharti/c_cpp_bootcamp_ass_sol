//Topic:6. Write a recursive function to print first N even natural numbers in reverse order.
#include <stdio.h>
void print_even_reverse(int);
void print_even_reverse(int x)
{
    if(x==0)
        return;
    printf("%d ",2*x);
    print_even_reverse(x-1);
}
int main()
{

 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 print_even_reverse(n);
 return 0;

}