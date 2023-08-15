//Topic:7. Write a function to print first N terms of Fibonacci series (TSRN) 
#include <stdio.h>
void print_fib(int);
void print_fib(int x)
{
    
    int temp=1,fib=1,fib_term=0;
    for(int i=1;i<=x;i++)
    {
        if(i==1 ||i==2)
        {
            printf("%d, ",1);
        }
        else
        {
            fib_term=temp+fib;
            temp=fib;
            fib=fib_term;
            printf("%d, ",fib_term);
        }
        
    }  
    
}
int main()
{

 int n;
 printf("Enter Value of n:");
 scanf("%d",&n);
 print_fib(n);
 return 0;

}