/*Topic:7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.*/
#include <iostream>
using namespace std;

class Box
{
 int length,breadth,height;
 public:
 Box()
 {
    cout<<"Enter the Length of box: "<<endl;
    cin>>length;
    cout<<"Enter the breadth of box: "<<endl;
    cin>>breadth;
    cout<<"Enter the height of box: "<<endl;
    cin>>height;
 }
 void cal_volume()
 {
    cout<<"Volume of the box = "<<length*breadth*height;
 }
};

int main()
{

 Box b1;
 b1.cal_volume();
 return 0;
}