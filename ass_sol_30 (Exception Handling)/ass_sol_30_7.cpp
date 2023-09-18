/*Topic:7. Write a C++ program to accept a username if the username has less than 6 characters 
or does contain any digit or special symbol.*/

#include <iostream>
#include <string>
using namespace std;

void create_username()
{
    string username;
    cout<<"Create Username:";
    //cin.ignore();
    getline(cin,username);
    cout<<username<<endl;

    try
    {
        if(username.size()>=6)
        {
            throw "Error: Username should be less than 6 characters.";
        }
       
        for(int i=0;i<username.length();i++)
        {
            if((username[i]>=48 && username[i]<=57) || (username[i]>=97 && username[i]<=122) || (username[i]>=65 && username[i]<=90))
            {
                //cout<<"Inside if block."<<username[i]<<endl;
                continue;
            }
            else
            {
                //cout<<"Inside else block."<<username[i]<<endl;
                throw "Error: Special Character should not present.";
            }
        }
    }
    catch(const char *s)
    {
        cout<<s<<endl<<endl;
        create_username();
    }
    //cout<<"Username successful created."<<endl; //This statement is not used inside this function due to side-effect of recursion.
}

int main()
{
    create_username();
    cout<<"Username successful created."<<endl;
    return 0;
}