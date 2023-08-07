//Topic:2. Write a program to print first N terms of Fibonacci series.
#include <stdio.h>
int fib(int);

int main()
{

 int n;//first_term=0,second_term=1,third_term;
  printf("Enter the n terms of fibonnaci series required for printing:");
  scanf("%d",&n);
  //third_term=first_term+second_term;
  for(int i=1;i<=n;i++)
  {
    printf("%d",fib(i));
    if(i!=n)
    {
        printf(", ");
    }
  }
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
