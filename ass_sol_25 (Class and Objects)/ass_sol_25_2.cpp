//Topic:2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.
#include <iostream>
using namespace std;

class Time
{
 private:
 int hr,min,sec;
 
 public:
 void setValue()
 {
    cout<<"Enter HH:";
    cin>>hr;
    cout<<"Enter MM:";
    cin>>min;
    cout<<"Enter SS:";
    cin>>sec;
 }

 void display()
 {
    cout<<hr<<":"<<min<<":"<<sec<<endl;
 }
};

int main()
{

 Time t1,t2;
 t1.setValue();
 t1.display();
 return 0;
}