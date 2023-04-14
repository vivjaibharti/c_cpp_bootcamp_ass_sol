//Topic:8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle.
#include <iostream>
using namespace std;
int cal_area(float);
int cal_area(int,int);
float cal_area(int,float);
int main()
{

 cout<<"Area of circle:"<<cal_area(5.0); 
 cout<<"Area of rectangle:"<<cal_area(10,20);
 cout<<"Area of triangle:"<<cal_area(10,5.2);
 
 return 0;
}

int cal_area(float r)
{
    return (3.14*r*r);
}

int cal_area(int length,int breadth)
{
    return (length*breadth);
}

float cal_area(int base,float height)
{
    return (0.5*base*height);
}