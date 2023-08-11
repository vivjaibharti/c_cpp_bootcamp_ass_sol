//Topic:2. Write a C++ program to overload unary operators that is increment and decrement.
#include <iostream>
using namespace std;

class Unary
{
    int u;
    public:
    void setData()
    {
        cout<<"Enter a number:";
        cin>>u;
    }
    void getData()
    {
        cout<<"Value of u:"<<u<<endl;
    }

    Unary operator++()
    {
        Unary temp;
        temp.u=u++;
        return temp;
    }

    // int operator++()
    // {
    //     u=++u;
    //     return u;
    // }

};

int main()
{

 Unary u1,u2,u3;
 u1.setData();
 u1.operator++();
 ++u1;
 u1.getData();
 u2.setData();
 u3=++u2;
 u3.getData();
 return 0;
}