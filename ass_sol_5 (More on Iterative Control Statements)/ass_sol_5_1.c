//Topic:1. Write a program to print MySirG N times on the screen.
#include <stdio.h>

int main()
{

  int n;
  printf("Enter value of n:");
  scanf("%d",&n);
  int i=1;
  while(i<=n)
  {
    printf("\"MySirG\"\n");
    i++;
  }

 return 0;

}