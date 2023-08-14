//Topic:9. Write a recursive function to print octal of a given decimal number.
#include <stdio.h>
void print_octal(int);
void print_octal(int x)
{
    if(x<1)
        return;
    print_octal(x/8);
    printf("%d",x%8);

}
int main()
{

 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 print_octal(n);
 return 0;

}