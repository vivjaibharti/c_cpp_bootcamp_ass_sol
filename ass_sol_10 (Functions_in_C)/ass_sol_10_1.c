//Topic:1. Write a function to calculate the area of a circle. (TSRS)
#include <stdio.h>
void cal_area(int);
int main()
{

 int r;
 printf("Enter the radius of circle:");
 scanf("%d",&r);
 cal_area(r);
 return 0;

}
void cal_area(int r)
{
    int area=3.14*r*r;
    printf("Area of circle having radius %d is %d.",r,area);
}