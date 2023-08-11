//Topic:3. Define a class Factorial and define an instance member function to find the Factorial of a number using class.
#include <iostream>
using namespace std;

class Factorial
{
    private:
    int x,fact=1;

    public:
    /*parameterised constructor used to intialize the instance member variable instead of setter function.
    Factorial(int z)
    {
        x=z;
    }*/

    void set_data()
    {
        cout<<"Enter a number to calculate its factorial:";
        cin>>x;
    }
    int cal_Factorial()
    {
        if(x<=0 || x==1)
        {
            return fact;
        }
        else
        {
            for(int i=1;i<=x;i++)
            {
                fact=fact*i;
            }
        }
        return fact;
    }
    void get_data()
    {
        cout<<"Factorial of "<<x<<" is "<<fact<<endl;
    }
};

int main()
{

    Factorial f1;
    f1.set_data();
    f1.cal_Factorial(); 
    f1.get_data();
    return 0;
}