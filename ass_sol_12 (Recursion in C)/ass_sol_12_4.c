//Topic:4. Write a recursive function to print first N odd natural numbers in reverse order.
#include <stdio.h>
void print_odd_reverse(int);
void print_odd_reverse(int x)
{
    if(x==0)
        return;
    printf("%d ",(-1+2*x));
    print_odd_reverse(x-1);
}
int main()
{

 int n;
 printf("Enter Value of n:");
 scanf("%d",&n);
 print_odd_reverse(n); 
 return 0;

}