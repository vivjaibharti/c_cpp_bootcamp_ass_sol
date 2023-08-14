//Topic:5. Write a recursive function to print first N even natural numbers.
#include <stdio.h>
void print_even(int);
void print_even(int x)
{
    if(x==0)
        return;
    print_even(x-1);
    printf("%d ",2*x);
}
int main()
{

 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 print_even(n);
 return 0;

}