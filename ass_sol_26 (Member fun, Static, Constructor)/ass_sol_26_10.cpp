//Topic:10. Define a class StaticCount and create a static variable. Increment this variable in a function and call this 3 times and display the result.
#include <iostream>
using namespace std;

class StaticCount
{
    static int count;
    public:
    static void increment()
    {
        count++;
        cout<<"count= "<<count<<endl;
    }
};
int StaticCount::count=10;

int main()
{

 StaticCount s1,s2;
 s1.increment();
 s1.increment();
 s1.increment();
 s2.increment();
 return 0;
}