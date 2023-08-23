//Topic:11. Create a class Marks that have one member variable marks and one member function that will print marks. We know that we can access member functions using (.) dot operator. Now you need to overload (->) arrow operator to access that function.
#include <iostream>
using namespace std;

class Mark
{
    int marks;
    public:
        void setData()
        {
            cout<<"Enter marks:";
            cin>>marks;
        }

        void display()
        {
            cout<<"Marks = "<<marks<<endl;
        }

        Mark* operator->()
        {
            return this;
        }
};


int main()
{
    Mark m1;
    m1->setData();
    m1->display();
    return 0;
}