//Topic:9. Define a class Circle and define an instance member function to find the area of the circle.

#include <iostream>
using namespace std;

class Circle
{
 private:
 int radius;
 float area;
 float pi=3.14;

 public:
 void setData()
 {
    cout<<"Enter the value of radius:";
    cin>>radius;
 }

 void cal_area()
 {
    area=pi*radius*radius;
 }

 void getArea()
 {
    cout<<"Area of circle="<<area;
 }
};


int main()
{

 Circle c1;
 c1.setData();
 c1.cal_area();
 c1.getArea();
 
 return 0;
}