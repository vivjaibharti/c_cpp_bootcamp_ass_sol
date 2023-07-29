//Topic:9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include <iostream>
using namespace std;

void max(int,int);
void max(float,float);

int main()
{

 int x,y;
 float a,b;
 cout<<"Enter the integer value of x and y :"<<endl;
 cin>>x>>y;
 cout<<"Enter the real value of a and b :"<<endl;
 cin>>a>>b;
 max(x,y);
 max(a,b);

 return 0;
}

void max(int x, int y)
{
    if(x>y)
    {
         cout<<x<<" is maximum"<<endl;
    }
    else
    {
        cout<<y<<" is maximum"<<endl;
    }
}

void max(float x, float y)
{
    if(x>y)
    {
         cout<<x<<" is maximum"<<endl;
    }
    else
    {
        cout<<y<<" is maximum"<<endl;
    }
}