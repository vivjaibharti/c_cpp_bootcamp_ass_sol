//Topic:12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>

int main()
{

    char a='a',z='z',A='A',Z='Z';
    char c;
    printf("Enter an alphabet:");
    scanf("%c",&c);
    int x=(int) c;
    if(x>=(int) a && x<=(int)z)
    {
        printf("%c is in lower case.\n",c);
    }
    //printf("%d\n",x);
    else if(x>=(int)A && x<=(int)Z)
    {
        printf("%c is in upper case.\n",c);
    }
    else
    {
        printf("Input is not an alphabet.\n");
    }

 return 0;

}