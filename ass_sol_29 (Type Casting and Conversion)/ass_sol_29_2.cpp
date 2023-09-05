/*Topic:2. Write a C++ program to convert Complex type to Primitive type. 
  Example - 
  int main() 
 { 
       Complex c1; 
       c1.setData(3,4); 
       int x; 
       x=c1; 
       return 0; 
 } 
 */
#include <iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
    
        void setData(int x,int y)
        {
            real=x;
            img=y;
        }

        void display()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }

        operator int()
        {
            return real;
        }
};


int main()
{
    Complex c1; 
    c1.setData(3,4);
    c1.display(); 
    int x; 
    x=c1;//
    cout<<"Value of x="<<x<<endl;
    return 0;
}