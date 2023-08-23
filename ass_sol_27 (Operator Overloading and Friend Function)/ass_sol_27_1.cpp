/*Topic:1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
#include <iostream>
using namespace std;

class Complex
{
 private:
    int real,img;
 public:
    void setData()
    {
        cout<<"Enter Value of real:";
        cin>>real;
        cout<<"Enter value of imag:";
        cin>>img;
    }

    void getData()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }

    Complex operator+(Complex C)
    {
        Complex temp;
        temp.real=real+C.real;
        temp.img=img+C.img;
        return temp;
    }
    Complex operator-(Complex C)
    {
        Complex temp;
        temp.real=real-C.real;
        temp.img=img-C.img;
        return temp;
    }
    Complex operator*(Complex &C)
    {
        Complex temp;
        temp.real=real*C.real;
        temp.img=img*C.img;
        return temp;
    }
    
    bool operator==(Complex C)
    {
        if(real==C.real && img==C.img)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

 Complex c1,c2,c3,c4;
 c1.setData();
 c2.setData();
 c3=c1+c2;
 c3.getData();
 cout<<(c4==c3)<<endl;
 c4.getData();
 c4=c1*c2;
 c4.getData();
 return 0;
}