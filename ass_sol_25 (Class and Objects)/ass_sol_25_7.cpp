//Topic:7.Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.

#include <iostream>
using namespace std;

class Greatest
{
 private:
 int x,y,z,max;

 public:
 void setData(int a,int b,int c)
 {
    x=a;
    y=b;
    z=c;
 }
 int finding_largest()
 {
    if (x>y)
    {
        if (x>z)
        {
            cout<<"X is the greatest number."<<endl;
            max=x;
            cout<<"max of case1:"<<max;
        }
        else
        {
            cout<<"Z is the greatest number."<<endl;
            max=z;
            cout<<"max of case1:"<<max;
        }
    }
    else if(y>z)
    {
        cout<<"Y is the greatest number."<<endl;
        max=y;
        cout<<"max of case1:"<<max;
    }
 }
};

int main()
{

 Greatest case1;
 case1.setData(58,4,65);
 case1.finding_largest();
 
 return 0;
}