//Topic:5. Write a C++ program to calculate the volume of a cuboid.
#include <iostream>
using namespace std;

int main()
{
 int l,b,h;
 cout<<"Enter the length of cuboid:";
 cin>>l;
 cout<<"Enter the breadth of cuboid:";
 cin>>b;
 cout<<"Enter the height of cuboid:";
 cin>>h;
 cout<<"Volume of cuboid="<<l*b*h;
 return 0;
}