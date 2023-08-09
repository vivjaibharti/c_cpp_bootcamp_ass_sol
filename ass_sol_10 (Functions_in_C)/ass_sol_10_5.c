//Topic:5. Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>
void print_odd(int);
int main()
{

 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 print_odd(n);
 return 0;

}

void print_odd(int x)
{
    int n=1;
    while(x!=0)
    {
        printf("%d",(-1+2*n));
        n++;
        if(x>1)
        {
            printf(",");
        }
        x--;
    }
}