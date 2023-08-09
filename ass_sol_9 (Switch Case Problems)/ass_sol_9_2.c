/*Topic:2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include <stdio.h>

int main()
{
 char c;
 printf("Choose from the given options given below:\na. Addition\nb. Substraction\nc. Muktiplication\nd. Division\ne.Exit\n");
 scanf("%c",&c);
 switch (c)
 {
    case 'a':
        {
            int a,b;
            printf("Enter value of a and b:\n");
            scanf("%d %d",&a,&b);
            printf("Addition of a and b = %d",a+b);
            break;
        }
    case 'b':
        {
            int a,b;
            printf("Enter value of a and b:\n");
            scanf("%d %d",&a,&b);
            printf("Substraction of a and b = %d",a-b);
            break;
        }

    case 'c':
    {
            int a,b;
            printf("Enter value of a and b:\n");
            scanf("%d %d",&a,&b);
            printf("Mutiplication of a and b = %d",a*b);
            break;
    }

     case 'd':
    {
            int a,b;
            printf("Enter value of a and b:\n");
            scanf("%d %d",&a,&b);
            printf("Addition of a and b = %d",a/b);
            break;
    }

     case 'e':
    {
            return 0;
    }
            
 }

 return 0;

}