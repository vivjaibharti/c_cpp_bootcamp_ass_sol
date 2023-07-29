//Topic:4. Define a class Counter and Write a program to Show Counter using Constructor.
#include <iostream>
using namespace std;

class Counter
{
 int count=0;
 public:
 Counter ()
 {
    cout<<"Value of Counter = "<<count<<endl;
 }
};

int main()
{

 Counter c1,c2;
 
 return 0;
}