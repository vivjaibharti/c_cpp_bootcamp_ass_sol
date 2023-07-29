/*Topic:1. Define a class Complex to represent a complex number with instance variables a and b to store real and imaginary parts.
    Also define following member functions
    a. void setData(int,int)
    b. void showData()
    c. Complex add(Complex)
*/
#include <iostream>
using namespace std;

class Complex
{
 int a;
 int b;
 public:
 void setData(int,int);
 void showData();
 Complex add(Complex);
};

void Complex::setData(int x, int y)
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout<<a<<"+"<<b<<"i"<<endl;
}
Complex Complex::add(Complex c)
{
    Complex d;
    d.a=a+c.a;
    d.b=b+c.b;
    return d;
}

int main()
{
 Complex c1,c2,c3;
 c1.setData(12,15);
 c2.setData(-45,18);
 c3=c1.add(c2);
 c1.showData();
 c2.showData();
 c3.showData();
 return 0;
}