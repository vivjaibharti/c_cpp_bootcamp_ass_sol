//Topic:6. Define a function to swap data of two int variables using call by reference.
#include <iostream>
using namespace std;

void swap(int &,int &);

int main()
{
    int a,b;
    cout<<"Enter value of a and b:"<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"Values after swapping a="<<a<<" and b="<<b<<endl;
 
 return 0;
}

void swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}