//Topic:1. Write a program which takes the month number as an input and display number of days in that month.
#include <stdio.h>

int main()
{

 int month,flag;
 printf("Enter the month's number to find its no. days:");
 scanf("%d",&month);
 if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
 {
    flag=0;
 }
 else if(month==2)
 {
    flag=1;
 }
 else
 {
    flag=-1;
 }
    switch (flag)
    {
        case 0:
            printf("%d month contains 31 days.",month);
            break;
        case 1:
            printf("%dnd month contains 28 days.",month);
            break;
        case -1:
            printf("%dth month contains 30 days.",month);
            break;
        default:
            printf("Wrong Input");
            break;
    }

 return 0;

}