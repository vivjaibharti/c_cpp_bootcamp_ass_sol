/*Topic:7. Define a C++ class fraction

class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}

Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
Output- as shown in screenshot..
*/

#include <iostream>
using namespace std;

class Fraction
{
    long numerator;
    long denominator;
    public:
        Fraction(long x=0,long y=0)
        {
            numerator=x;
            denominator=y;
        }

        Fraction(const Fraction &f)
        {
            //cout<<"Copy Constructor called."<<endl;
            numerator=f.numerator;
            denominator=f.denominator;
        }

        Fraction operator++()
        {
            Fraction temp;
            temp.numerator=++numerator;
            temp.denominator=++denominator;
            return temp;
        }

        Fraction operator++(int dummy)
        {
            Fraction temp;
            temp.numerator=numerator++;
            temp.denominator=denominator++;
            return temp;
        }

        Fraction operator--()
        {
            Fraction temp;
            temp.numerator=--numerator;
            temp.denominator=--denominator;
            return temp;
        }

        Fraction operator--(int dummy)
        {
            Fraction temp;
            temp.numerator=numerator--;
            temp.denominator=denominator--;
            return temp;
        }

        friend ostream& operator<<(ostream &os,Fraction &f)
        {
            //cout<<"Operator<< Called."<<endl;
            cout<<f.numerator<<"/"<<f.denominator<<endl;
            return os;
        }

        friend istream& operator>>(istream &input,Fraction &f)
        {
            cout<<"Numerator : ";
            cin>>f.numerator;
            cout<<"Denominator : ";
            cin>>f.denominator;
            return input;
        }

};


int main()
{
    Fraction f1,f2;
    cout<<"Enter First Fraction Value:"<<endl;
    cin>>f1;
    cout<<"f1++: ";
    f1++;
    cout<<f1;
    cout<<"++f1: ";
    ++f1;
    cout<<f1;

    cout<<"Enter 2nd Fraction Value:"<<endl;
    cin>>f2;
    f2=++f1;
    cout<<"f1: "<<f1;
    cout<<"f2: "<<f2;
    
    f2=f1++;
    cout<<"f1: "<<f1;
    cout<<"f2: "<<f2;
    
    return 0;
}