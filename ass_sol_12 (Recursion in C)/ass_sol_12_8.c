//Topic:8. Write a recursive function to print binary of a given decimal number.
#include <stdio.h>
void print_binary(int);
void print_binary(int x)
{
    if(x<1)
    {
        return;
    }
    print_binary(x/2);
    printf("%d",x%2);
}
int main()
{

 int n;
 printf("Enter Value of n:");
 scanf("%d",&n);
 print_binary(n);
 return 0;

}