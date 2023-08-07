//Topic:1. Write a program to find the Nth term of the Fibonnaci series.
#include <stdio.h>
int fib(int);

int main()
{

  int n;//first_term=0,second_term=1,third_term;
  printf("Enter the nth term of fibonnaci series required:");
  scanf("%d",&n);
  //third_term=first_term+second_term;
  printf("%dth term of fibonnaci series is %d.",n,fib(n));
  return 0;
}

int fib(int x)
{
    if(x==1)
    {
        return 0;
    }
    else if(x==2)
    {
        return 1;
    }
    else
    {
        return (fib(x-1)+fib(x-2));
    }
}