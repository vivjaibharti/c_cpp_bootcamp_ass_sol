/*
Topic:10. Create a Distance class having 2 instance variable feet and inches. Also create
default constructor and parameterized constructor takes 2 variables . Now overload ()function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15.
*/
#include <iostream>
using namespace std;

class Distance
{
    int feet;
    int inches;
    public:
        Distance()
        {
            feet=0;
            inches=0;
        }

        Distance(int f,int i)
        {
            feet=f;
            inches=i;
        }

        Distance operator() (int a,int b, int c)
        {
            feet=a+c+5;
            inches=a+b+15;
            return *this;
        }

        void display()
        {
            cout<<"Feet : "<<feet<<" Inches : "<<inches<<endl;
        }
};


int main()
{
    
    Distance d1,d2;
    d1(10,15,20);
    d1.display();
    d2=d1(1,1,1);
    d2.display();
    return 0;
}