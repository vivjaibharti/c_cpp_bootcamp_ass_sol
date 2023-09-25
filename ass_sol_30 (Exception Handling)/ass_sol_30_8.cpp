/*Topic:8. Write a C++ program to accept a password and throw an exception if the password has 
less than 6 characters or does not contain a digit or does not contain any special character or does not contain any capital letter.*/
#include <iostream>
#include <string>
using namespace std;

bool isValidPassword(const string& ref)
{
    try
    {
        int flag_small=0,flag_cap=0,flag_num=0;

        if(ref.length()<6)
        {
            throw "Error: Password must be more than 5 charaters.";
        }

       for (char c:ref)
       {
            if((c>='a' && c<='z') ||(c>='A' && c<='Z') || (c>='0' && c<='9'))
            {
                continue;
            }
            else
            {
                throw "Error: Must not contain any special characters.";
            }
       }

       return true;

    //    for (char c: ref)
    //    {
    //         if(c>='a' && c<='z')
    //         {
    //             flag_small=1;
    //             break;
    //             throw flag_small;
    //         }
    //         else if((c>='A' && c<='Z'))
    //         {
    //             flag_cap=2;
    //             throw flag_cap;
    //         }
    //         else if (c>='0' && c<='9')
    //         {
    //             flag_num=3;
    //             throw flag_num;
    //         }
    //    }

        // for (char c: ref)
        // {

        // }

    }
    catch(const char*s)
    {
        cout<<s<<endl;
        return false;
    }
    // catch(int x)
    // {
    //     if(x==1)
    //     {
    //         cout<<"Error:Password must contain at least one small english alphabet."<<endl;
    //         return false;
    //     }
    //     if(x==2)
    //     {
    //         cout<<"Error:Password must contain at least one big english alphabet."<<endl;
    //         return false;
    //     }
    //     if(x==3)
    //     {
    //         cout<<"Error:Password must contaon at least one numeric digit."<<endl;
    //         return false;
    //     }
    // }
    
}

int main()
{
    string password;
    do
    {
        cout<<"Create Password:";
        //cin.ignore();
        getline(cin,password);

        if(isValidPassword(password))
        {
            cout<<password<<endl;
            break;
        }

    } while (true);
    
    return 0;
}