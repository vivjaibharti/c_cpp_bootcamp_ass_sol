/*Topic:6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.
*/
#include <iostream>
#include <cstring>
using namespace std;

class CString
{
    char f_name[50];
    public:
        CString()
        {
            cout<<"Default Constructor Called."<<endl;
        }
        CString(const char str1[])
        {
            cout<<"Parameterised Constructor Called."<<endl;
            strcpy(f_name,str1);
        }
        
        CString(const CString &c)
        {
            cout<<"Copy Constructor Called."<<endl;
            strcpy(f_name,c.f_name);
        }

        CString operator +(CString c)
        {
            cout<<"Operator+ Called."<<endl;
            CString temp;
            strcpy(temp.f_name,f_name);
            strcat(temp.f_name,c.f_name);
            return temp;
        }

        bool operator ==(CString c)
        {
            cout<<"Operator== Called."<<endl;
            if(strcmp(f_name,c.f_name)==0)
                return true;
            else
                return false;
        }
        void getdata()
        {
             cout<<"Name: "<<f_name<<endl;
        }
};


int main()
{
    CString c1,c2(" Jaiswal"),c3("Vivek");
    c3.getdata();
    c2.getdata();
    c1=c3+c2;//c1=c3.operator+(c2);
    c1.getdata();
    CString c4("Hello"),c5("Hello");
    if(c4==c5)
    {
        cout<<"Both are same."<<endl;
    }
    return 0;
}