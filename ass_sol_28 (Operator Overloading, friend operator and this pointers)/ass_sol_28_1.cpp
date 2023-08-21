/*Topic:1. Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator
*/
#include <iostream>
using namespace std;

class Complex
{
    float real,img;
    public:
        Complex()//Default Constructor
        {
            real=0;
            img=0;
        }

        Complex(float x,float y)//Parameterised Constructor
        {
            real=x;
            img=y;
        }

        Complex (Complex &c)//Copy Constructor
        {
            real=c.real;
            img=c.img;
        }

        friend ostream&  operator<<(ostream &os,Complex c)//Extraction operator overloading.
        {
            cout<<c.real<<"+"<<c.img<<"i"<<endl;
            return os;
        }

        friend istream&  operator>>(istream &input,Complex &c)//Insertion operator overloading.
        {
            cout<<"Enter Value of real:";
            cin>>c.real;
            cout<<"Enter Value of imaginary number:";
            cin>>c.img;
            return input;
        }
};


int main()
{
    Complex c1,c2(5,6);
    cout<<c1<<c2;;
    Complex c3=c2;
    cout<<c3;
    cin>>c2;
    cout<<c2;
    return 0;
}