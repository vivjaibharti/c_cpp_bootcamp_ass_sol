/*Topic:1.Write a C++ program to convert Primitive type to Complex type. 
  Example - 
  int main() 
 { 
       Complex c1; 
       Int x=5; 
       c1=x; 
       return 0; 
 }
 */
#include <iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
        Complex()
        {
            real=0;
            img=0;
        }

        Complex(int x)
        {
            real=x;
            img=x;
        }
        
        void display()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }


};

int main()
{
    
    Complex c1; 
    int x=5; 
    c1=x;
    c1.display();
    return 0;
    
}