//Topic:16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include <stdio.h>

int main()
{

 char a='a',z='z',A='A',Z='Z',i='0',j='9';
 //char a="a",z="z",A="A",Z="Z",i="0",j="9";//gives an error
 char x;
 printf("Enter a character:");
 scanf("%c",&x);
 int y=(int) x;
 printf("ASCII code of %c is %d.\n",x,x);

 if(y>=(int)a && y<=(int)z)
 {
    printf("%c is an lowercase alphabet.\n",x);
 }
 else if(y>=(int) A && y<=(int) Z)
 {
    printf("%c is an uppercase alphabet.\n",x);
 }
 else if(y>=(int) i && y<=(int) j)
 {
    printf("%c is a digit.\n",x);
 }
 else
 {
    printf("%c is a special character.\n",x);
 }
 return 0;

}