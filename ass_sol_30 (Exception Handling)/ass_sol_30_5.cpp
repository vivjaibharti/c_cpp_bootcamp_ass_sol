//Topic:5. Write a C++ program to accept a mobile number and throw an exception if it does not contain 10 digits.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char mobile[11];
    cout<<"Enter mobile no.:"<<endl;
    cin.getline(mobile,11);
    //cout<<int(mobile[10])<<endl;
    //cout<<strlen(mobile)<<endl;
    //cout<<sizeof(mobile)<<endl;
    try
    {
        bool flag=false;
        for(int i=0;i<strlen(mobile);i++)
        {
            if(mobile[i]>='0' && mobile[i]<='9')
            {
                continue;
            }
            else
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            throw "Error: Mobile no. should only contain digits.";
        }

        if(strlen(mobile)!=10)
        {
            throw "Error: Digits should be 10.";
        }
    }
    catch(const char *s)
    {
        cout<<s<<endl;
    }
    
    cout<<mobile<<endl;
    return 0;
}