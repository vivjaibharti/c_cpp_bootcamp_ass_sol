/*Topic:7. Write a C++ program to accept a username if the username has less than 6 characters 
or does contain any digit or special symbol.*/

#include <iostream>
#include <string>
using namespace std;

string create_username()
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
    return username;
}

int main()
{
    string username=create_username();
    cout<<"Username: "<<username <<" successful created."<<endl;
    return 0;
}

/*
However, there's a potential issue with this code:
Using recursion to repeatedly ask for a username is not the best approach. It can lead to a stack overflow if the user keeps entering invalid usernames. It's better to use a loop in the main function to repeatedly ask for a username until a valid one is provided.

Here's an updated version of your code with a loop in the main function:

#include <iostream>
#include <string>
using namespace std;

bool is_valid_username(const string& username)
{
    if (username.size() >= 6)
    {
        return false;
    }

    for (char c : username)
    {
        if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z'))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string username;

    do
    {
        cout << "Create Username: ";
        getline(cin, username);

        if (is_valid_username(username))
        {
            cout << "Username: " << username << " successfully created." << endl;
            break;
        }
        else
        {
            cout << "Error: Username should be less than 6 characters and contain only alphabetic characters." << endl;
        }
    } while (true);

    return 0;
}
*/