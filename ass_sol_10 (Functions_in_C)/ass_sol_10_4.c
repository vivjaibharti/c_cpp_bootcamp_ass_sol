//Topic:4. Write a function to print first N natural numbers (TSRN).
#include <stdio.h>
void print_natural(int);
int main()
{

 int x;
 printf("Enter the number:");
 scanf("%d",&x);
 print_natural(x);
 return 0;

}
void print_natural(int a)
{
    int n=1;
    while(n<=a)
    {
        printf("%d",n);
        if(n<a)
        {
            printf(",");
        }
        n++;
    }
}