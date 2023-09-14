//Topic:2. Write a C++ program to demonstrate try, throw and catch statements.
#include <iostream>
using namespace std;
void test_try(int num)
{
    try
    {
        if(num>0 && num<9)
        {
            throw num;
        }
        else
        {
            throw;
        }
    }
    catch(int x)
    {
        cout<<"Error:It is a single digit number."<<endl;
    }
    
}

int main()
{
    
    int a;
    cout<<"Enter a numeric value of two digit:";
    cin>>a;
    test_try(a);
    return 0;
}