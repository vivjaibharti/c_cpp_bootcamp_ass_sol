//Topic:8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle.
#include <iostream>
using namespace std;

void cal_area(int);
void cal_area(int,int);
void cal_area(double,double);

int main()
{
    // double x;
    // float y;
    // int z;
    // char c='1';
 cal_area(5); 
 cal_area(10,20);
 cal_area(10.23,5.156);
 //cout<<sizeof(c)<<endl;
 //cout<<c;
 return 0;
}

void cal_area(int r)
{
    cout<<"The area of circle having radius="<<r<<" is: "<<3.14*r*r<<endl;;
}

void cal_area(int length,int breadth)
{
    cout<<"The area of rectangle having length="<<length<<" and breadth="<<breadth<<" is: "<<length*breadth<<endl;
}

void cal_area(double base,double height)
{
    cout<<"The area of triangle having base="<<base<<" and height="<<height<<" is: "<<0.5*base*height<<endl;
}