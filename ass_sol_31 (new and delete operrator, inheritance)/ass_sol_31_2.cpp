/*Topic:2. Write a C++ program to add two numbers using single inheritance. Accept these two numbers from the user in base class and display the sum of these two numbers in derived class
*/
#include <iostream>
using namespace std;

class Number
{
    private:
        int a,b;
    public:
        Number()//default constructor
        {
            cout<<"Default Constructor of Number called."<<endl;
        }
        void setData()
        {
            cout<<"Enter value of a: ";
            cin>>a;
            cout<<"Enyer value of b: ";
            cin>>b;
        }
        int getDataA()
        {
            return a;
        }
        int getDataB()
        {
            return b;
        }
};

class Sum:public Number
{
    private:
        int sum;
    public:
        Sum()
        {
            setData();
        }
        void add()
        {
            sum=getDataA()+getDataB();
            cout<<"Sum of a and b: "<<sum<<endl;
        }
};


int main()
{
    Sum s1;
    s1.add();
    return 0;
}