//Topic:1. Write a C++ program to demonstrate the use of try, catch block with the argument as an integer and string using multiple catch blocks.
#include <iostream>
using namespace std;


int main()
{
    int x;
    int y;
    float result;
    cout<<"Enter value of x:";
    cin>>x;
    cout<<"Enter value of y:";
    cin>>y;
    try
    {
        if(y==0)
        {
            throw "Divide by 0 erro.";
        }
        if(y<0)
        {
            throw "Negative Value not allowed.";
        }
        if(x<y)
        {
            throw y;
        }
        result=x/y;
    }
    catch(const char *s)
    {
        cout<<s<<endl;
    }
    catch(int a)
    {
        cout<<"x is smaller. Enter again."<<endl;
    }
    catch(...)
    {
        cout<<"Input Invalid. Enter Again."<<endl;
    }
    cout<<"Result = "<<result<<endl;
    return 0;
}