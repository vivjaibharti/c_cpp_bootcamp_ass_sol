/*Topic:2. Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make sure the names of formal arguments are the same as names of instance variables
*/
#include <iostream>
using namespace std;

class Complex
{
    float real,img;
    public:
        Complex()
        {

        }

        Complex(float real,float img)
        {
            this->real=real;
            this->img=img;
        }

        Complex(Complex &c)
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
};


int main()
{
    
    Complex c1,c2(10,10);
    c1.setData(5,6);
    c1.display();
    c2.display();

    return 0;
}