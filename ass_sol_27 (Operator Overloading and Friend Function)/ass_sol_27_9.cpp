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
            //Mystring temp;
            // strcpy(temp.str,str);
            // for(int i=0;i<strlen(temp.str);i++)
            // {
               
            // }
            strrev(str);
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