/*Topic:9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).
*/ 
#include <iostream>
#include <cstring>
using namespace std;

class Mystring
{
    char str [100];
    public:
        Mystring()
        {

        }

        Mystring(const char s[])
        {
            strcpy(str,s);
        }

        Mystring  operator !()
        {
            for(int i=0;str[i]!='\0';i++)
            {
                if(str[i]>=65 && str[i]<=90)
                {
                    str[i]=str[i]+32;
                }
                else if(str[i]>=97 && str[i]<=122)
                {
                     str[i]=str[i]-32;
                }
            }
            return *this;
        }

        void getData()
        {
            cout<<str<<endl;
        }
};


int main()
{
    
    Mystring m1("Vivek Jaiswal");
    (!m1).getData();
    (!m1).getData();
    return 0;
}