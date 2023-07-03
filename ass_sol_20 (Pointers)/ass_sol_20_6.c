//Topic:6. Write a program to calculate the length of the string using a pointer.
#include <stdio.h>

int main()
{

    //  char a[]="vivek";
    //  int i;
    //  for(i=0;a[i];i++)
    //  {

    //  }
    //  printf("%s",a);
    //  printf("\nThe length of string is %d.",i);

 char *a="vivek kumar";
 int length=0;
 printf("%s",a);
 for(length;a[length];length++);
 printf("\nThe length of the string \"%s\" is %d.",a,length);
 return 0;

}