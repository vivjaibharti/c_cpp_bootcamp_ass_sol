//Topic:3. Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include <stdio.h>

int main()
{

 int day;
 printf("Enter the day number of a week:");
 scanf("%d",&day);
 switch(day%2==0?0:1)
 {
    case 0:
    {
        printf("Good Morning!!!!\n");
        break;
    }

    case 1:
    {
        printf("Namaskar!!!!\n");
        break;
    }
 }
 return 0;

}