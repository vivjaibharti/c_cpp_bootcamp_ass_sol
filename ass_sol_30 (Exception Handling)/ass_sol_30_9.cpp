//Topic:9. Write a C++ program to accept Gmail id only and throw an exception if the id does not contain @ and gmail.com.
#include <iostream>
#include <string>
using namespace std;

bool isValidGmailId(const string& email)
{
    int flag_at=0;
    char c='@';
    int index_at;
    for(int i=1;i<=email.length();i++)
    {
        if(c=='@')
        {
            index_at=i;
            break;
        }
    }

    if(index_at<=1 || )
    for(char c:email)
    {
        if(c=='@')
        {
            flag_at=1;
            break;
        }
        if(email.length())
    }

    try
    {
        if(flag_at==0)
        {
            throw "Error: Email id must contain @.";
        }
    }
    catch(const char *s)
    {
        cout<<s<<endl;
        return false;
    }
    
}

int main()
{
    string email;
    do
    {
        cout<<"Enter Your Gmail Id:";
        getline(cin,email);

        if(isValidGmailId(email))
        {
            cout<<email<<endl;
            break;  
        }
    } while (true);
    
    return 0;
}