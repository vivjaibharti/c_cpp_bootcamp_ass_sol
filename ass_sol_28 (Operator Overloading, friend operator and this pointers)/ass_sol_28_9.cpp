//Topic:9. Create an Integer class that contains int x as an instance variable and overload casting int() operator that will type cast your Integer class object to int data type.
#include <iostream>
using namespace std;

class Integer
{
    int x;
    public:
        Integer()
        {

        }

        Integer(int n)
        {
            x=n;
        }

        Integer(const Integer &n)
        {
            x=n.x;
        }

        void setData(int n)
        {
            x=n;
        }

        void display ()
        {
            cout<<"Value of integer:"<<x<<endl;
        }

        operatorint() (Integer &i)
        {

        }
};


int main()
{
    
    
    
    return 0;
}