//Topic:7. Write a recursive function to print squares of first N natural numbers.
#include <stdio.h>
void print_square(int);
void print_square(int x)
{
    if(x==0)
        return;
    print_square(x-1);
    printf("%d ",x*x);
}
int main()
{

 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 print_square(n);
 return 0;

}