/*Topic:5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add functions to support Invent1 to float and Invent1 to Invent2 type. 
Example -  
int main() 
{ 
       Invent1 s1(4,5); 
       Invent2 d1; 
       float tv; 
       tv=s1; 
       d1=s1; 
       return 0; 
}
*/
#include <iostream>
using namespace std;

class Invent1
{
    int a,b;
    public:
        Invent1()
        {

        }

        Invent1(int x, int y)
        {
            a=x;
            b=y;
        }

        operator float()
        {
            return a;
        }

        int getA()
        {
            return a;
        }

        int getB()
        {
            return b;
        }

        void display()
        {
            cout<<"Invent1: a="<<a<<" b="<<b<<endl;
        }
};

class Invent2
{
    int m,n;
    public:
        Invent2()
        {

        }

        Invent2(Invent1 i)
        {
            m=i.getA();
            n=i.getB();
        }

        void display()
        {
            cout<<"Invent2: m="<<m<<" n="<<n<<endl;
        }
};


int main()
{
    Invent1 s1(4,5); 
    Invent2 d1; 
    float tv; 
    tv=s1;
    cout<<tv<<endl; 
    d1=s1;
    d1.display();
    return 0; 
    
}