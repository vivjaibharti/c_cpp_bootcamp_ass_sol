//Topic:4. Write a C++ program to accept an email address and throw an exception if it does not contain @ symbol.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    
    char c[50];
    cout<<"Enter an email address:";
    cin.getline(c,49);
    try
    {
        bool flag=false;
        for(int i=0;i<strlen(c);i++)
        {
            if(c[i]=='@')
            {
                flag=true;
                break;
            }
        }
        if (flag==false)
            {
                throw "Error: @ is not present in the given email.";
            }
    }
    catch(const char *s)
    {
        cout<<s<<endl;
    }
    cout<<c<<endl;
    
    return 0;
}