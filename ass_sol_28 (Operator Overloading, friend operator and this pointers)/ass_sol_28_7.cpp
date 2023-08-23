//Topic:7. Create an Integer class and overload logical not operator for that class.
#include <iostream>
using namespace std;

class Integer
{
    int x;
    public:
        Integer()
        {
            x=0;
        }

        Integer(int n)
        {
            x=n;
        }

        Integer(Integer &n)
        {
            x=n.x;
        }

        void setData(int n)
        {
            x=n;
        }

        void display()
        {
            cout<<"Value of integer= "<<x<<endl;
        }

       Integer& operator!()//Logical not operator overloading.
       {
            x=!x;
            return *this;
       }
};


int main()
{
    Integer i1,i2;
    i1.setData(10);
    i2.setData(-15);
    i1.display();
    Integer i3=!i1;
    i3.display();
    i1.display();
    return 0;
}