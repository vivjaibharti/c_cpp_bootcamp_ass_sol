//Topic:3. Write a recursive function to print first N odd natural numbers. 
#include <stdio.h>
void print_odd(int);
void print_odd(int x)
{
    if(x==0)
    {
        return;
    }
    print_odd(x-1);
    printf("%d ",(-1+2*x));
}

int main()
{

 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 print_odd(n);
 return 0;

}