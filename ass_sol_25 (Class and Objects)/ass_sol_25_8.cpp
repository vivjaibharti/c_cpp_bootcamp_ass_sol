//Topic:8. Define a class Rectangle and define an instance member function to find the area of the rectangle.

#include <iostream>
using namespace std;

class Rectangle
{
 private:
 int length,breadth,area;

 public:
 void setData()
 {
    cout<<"Enter the dimensions of rectangle\n";
    cout<<"Enter the length of rectangle:";
    cin>>length;
    cout<<"Enter the breadth of rectangle:";
    cin>>breadth;
 }
 
 void cal_area()
 {
    area=length*breadth;
 }

 void print_area()
 {
    cout<<"Area of rectangle="<<area;
    
 }
};


int main()
{

 Rectangle rec1;
 rec1.setData();
 rec1.cal_area();
 rec1.print_area();
 
 return 0;
}