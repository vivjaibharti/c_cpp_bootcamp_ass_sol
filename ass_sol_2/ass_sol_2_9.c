//Topic:9. Write a program to print size of an int, a float, a char and a double type variable

#include <stdio.h>

int main()
{

 int x;
 float y;
 char c;
 double z;

 printf("Size of int=%d bytes\nSize of float=%d bytes\nSize of char=%d bytes\nSize of double=%d bytes",sizeof(x),sizeof(y),sizeof(c),sizeof(z));

 return 0;

}