//Topic:5. Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class
#include <iostream>
using namespace std;

class ReverseNumber
{
 int x;
 int flag=0;
 int reverse;

 public:
 /*Parameterized Constructor to set the value of the input number whose reverse is required.
 ReverseNumber()
 {
    cout<<"Enter the input Number:";
    cin>>x;
    if(x<0) //This statement is to convert the given input in positive integer. 
    {   x=x+(-2*x);
        flag++;
    }
 }*/
 void set_value()
 {
    cout<<"Enter value of x:";
    cin>>x;
    if(x<0) //This statement is to convert the given input in positive integer. 
    {   x=x+(-2*x);
        flag++;
    }
 }

 void do_reverse()
 {
    reverse=0;
    while(x>0)
    {
        reverse=reverse*10+x%10;
        x=x/10;
    }
    //this statement is used to convert the reversed number in to negative if the given input was also a negative integer otherwise it doesnot convert the reversed number in to negative.
    if(flag!=0) 
    {
        reverse=reverse+(-2*reverse);
        cout<<"Reverse of the input number"<<"="<<reverse<<endl;
    }
    else
    {   
        cout<<"Reverse of the input number"<<"="<<reverse<<endl;
    }
 }
};

int main()
{

 ReverseNumber r1;
 r1.set_value();
 r1.do_reverse();
 ReverseNumber r2;
 r2.set_value();
 r2.do_reverse();
 
 return 0;
}