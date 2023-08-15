//Topic:10. Write a recursive function to print reverse of a given number.
#include <stdio.h>
void print_reverse(int);
void print_reverse(int x)
{
    if(x==0)
    {
        return;
    }
    printf("%d",x%10);
    x=x/10;
    print_reverse(x);
}
int main()
{

 int n;
 printf("Enter a number to reverse:");
 scanf("%d",&n);
 print_reverse(n);
 return 0;

}