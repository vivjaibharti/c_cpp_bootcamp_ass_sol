//Topic:6. Create a complex class and overload assignment operator for that class.
#include <iostream>
using namespace std;

class Complex
{
    float real,img;
    public:
        Complex()
        {
            real=0;
            img=0;
        }

        Complex(float real,float img)
        {
            this->real=real;
            this->img=img;
        }

        Complex(const Complex &c)
        {
            real=c.real;
            img=c.img;
        }

        void setData(float real,float img)
        {
            this->real=real;
            this->img=img;
        }

        void display()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }

        Complex& operator= (Complex &c)//Assignment Operator Overloading.
        {
            real=c.real;
            img=c.img;
            return *this;
        }
};


int main()
{
    
    Complex c1,c2,c3;
    c1.setData(10,10);
    c3=c2=c1;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}