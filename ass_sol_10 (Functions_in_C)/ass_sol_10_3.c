//Topic:3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include <stdio.h>
int check_even_odd(int);
int main()
{

 int x;
 printf("Enter a number:\n");
 scanf("%d",&x);
 printf("%d",check_even_odd(x));
 return 0;

}

int check_even_odd(int x)
{
    if(x%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}