//Topic:6. Write a C++ program to accept area pin code and throw an exception if it does not contain 6 digits.
#include <iostream>
using namespace std;

int main()
{
    int pincode;
    cout<<"Enter your pincode:";
    cin>>pincode;
    try
    {
        int temp=pincode;
        int count=0;
        while(temp!=0)
        {
            count++;
            temp=temp/10;
        }

        if(count!=6)
        {
            throw count;
        }
    }
    catch(int x)
    {
        cout<<"Error: Pin code should be of six digits instead of "<<x<<" digits."<<endl;
    }
    
    return 0;
}