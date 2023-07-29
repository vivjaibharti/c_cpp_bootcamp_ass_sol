/*Topic:8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.*/
#include <iostream>
using namespace std;

class Bank
{
 float principal;
 int year;
 static float roi;
 public:
 void setter()
 {
    cout<<"Enter the Principal Amount :";
    cin>>principal;
    cout<<"Enter the no. of years : ";
    cin>>year;
 }
 void set_static()
 {
    cout<<"Enter the rate of interest :";
    cin>>roi;
 }

 void cal_simpleInterest()
 {
    cout<<"The amount of simple interest = "<<(principal*year*roi)/100;
 }
};

float Bank::roi=5.0;

int main()
{

 Bank b1;
 b1.setter();
 b1.set_static();
 b1.cal_simpleInterest();
 return 0;
}