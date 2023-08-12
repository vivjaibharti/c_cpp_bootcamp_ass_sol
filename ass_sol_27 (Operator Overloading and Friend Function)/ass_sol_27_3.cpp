//Topic:3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.
#include <iostream>
using namespace std;

class Complex
{
 int real,img;
 public:
 //Using constructor to initalise property of complex class object..
 Complex()
 {
    cout<<"Non-Parameterized Constructor Called."<<endl;
    cout<<"Enter value of real:";
    cin>>real;
    cout<<"Enter value of img:";
    cin>>img;
 }
 Complex(int a,int b)
 {
    real=a;
    img=b;
 }
 void getData()
 {
    cout<<real<<"+"<<img<<"i"<<endl;
 }
 friend Complex operator+(Complex,Complex);
 friend Complex operator+(Complex,int);
 friend Complex operator+(int,Complex);

    // Explicit Copy constructor
     Complex (const Complex &e)//without const keyword it throws error...
     {
        cout<<"Explicit Copy Constructor Called."<<endl;
        real=e.real;
        img=e.img;
        cout<<"Exiting Explicit Copy Constructor."<<endl;
     }
};

Complex operator+(Complex C,Complex D)
{
    cout<<"Inside friend function-1."<<endl;
    Complex temp(0,0);
    temp.real=C.real+D.real;
    temp.img=C.img+D.img;
    return temp;
}

Complex operator+(Complex C,int x)
{
    cout<<"Inside friend function-2."<<endl;
    Complex temp(0,0);
    temp.real=C.real+x;
    temp.img=C.img;
    return temp;
}

Complex operator+(int x,Complex C)
{
    cout<<"Inside friend function-3."<<endl;
    Complex temp(0,0);
    temp.real=C.real+x;
    temp.img=C.img;
    return temp;
}
int main()
{
 Complex c1,c2;
 Complex c3=5+c1;
 c3.getData();
 return 0;
}