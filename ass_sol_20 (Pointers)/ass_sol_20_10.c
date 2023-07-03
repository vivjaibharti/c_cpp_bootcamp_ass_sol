//Topic:10. Write a program to print a string in reverse using a pointer.
#include <stdio.h>
#include <string.h>

int main()
{

 char a[12];
 printf("Enter a string of size 11:");
 fgets(a,12,stdin);
 printf("String before reversing:%s\n",a);
 printf("Size of string:%d\n",strlen(a));
  printf("String printinting in reverse order:");

 for(int i=strlen(a);i>=0;i--)
 {
    printf("%c",a[i]);
 }

 return 0;

}