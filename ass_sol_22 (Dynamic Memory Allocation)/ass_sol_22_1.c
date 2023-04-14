//Topic:1. Define a function to input variable length string and store it in an array without memory wastage.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
 
 char *ptr,c;                     
 int i=0,j=1;
 ptr=(char *)malloc(sizeof(char));
 printf("Enter a string:");

 while (c!='\n')
 {
    c=getc(stdin);
    j++;
    ptr=(char *)realloc(ptr,j*sizeof(char));
    //*(ptr+i)=c;
    ptr[i]=c;
    i++;
 }
 //*(ptr+i)='\0';
 ptr[i]='\0';
 printf("\nSize of dynamically allocated memory is:%d\n",sizeof(ptr));
 puts(ptr);
 printf("j=%d",j);
 free(ptr);
 printf("\nSize of dynamically allocated memory is:%d",sizeof(ptr));
 //for(int i=0;i)
 return 0;

}
