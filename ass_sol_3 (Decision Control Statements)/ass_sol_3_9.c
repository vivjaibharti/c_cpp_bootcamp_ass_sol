//Topic:9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include <stdio.h>

int main()
{

 int x,y,z;
 printf("Enter three numbers:");
 scanf("%d%d%d",&x,&y,&z);
 (x>=y)?((x>=z)?printf("%d is the greatest number.\n",x):printf("%d is the greatest number.\n",z)):((y>=z)?printf("%d is the greatest number\n",y):printf("%d is the greatest number\n",z));

 return 0;

}