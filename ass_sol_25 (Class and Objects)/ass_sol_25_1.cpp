//Topic:1. Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and print values of complex number.
#include <iostream>
using namespace std;

class Complex
{
 private:
 float real;
 float img;

 public:
 void setValue(float x,float y)
 {
    real=x;
    img=y;
 }
 void print()
 {
    cout<<real<<"+"<<img<<"i"<<endl;
 }
 void print(Complex c)
 {
   cout<<c.real<<"+"<<c.img<<"i"<<endl;
 }
};
  
int main()
{
 Complex c1,c2;
 c1.setValue(12,12.5);
 c2.setValue(13,13.5);
 c1.print();
 c1.print(c2);
 return 0;
}