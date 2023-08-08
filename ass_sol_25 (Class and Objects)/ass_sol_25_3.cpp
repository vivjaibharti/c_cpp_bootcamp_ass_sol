//Topic:3. Define a class Factorial and define an instance member function to find the Factorial of a number using class.
#include <iostream>
using namespace std;

class Factorial
{
    private:
    int x,y=1;

    public:
    //parameterised constructor used to intialize the instance member variable instead of setter function.
    Factorial(int z)
    {
        x=z;
    }

    void cal_Factorial()
    {
        if(x<=0 || x==1)
        {
            
        }
        else
        {
            for(int i=1;i<=x;i++)
            {
                y=y*i;
            }
        }
        cout<<"Factorial of "<<x<<"="<<y<<endl;
    }
};


int main()
{

    Factorial f1(5),f2(2),f3(1),f4(33);
    f1.cal_Factorial(); 
    f2.cal_Factorial();
    f3.cal_Factorial();
    f4.cal_Factorial();
 
 return 0;
}