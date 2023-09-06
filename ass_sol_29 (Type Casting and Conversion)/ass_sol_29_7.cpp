/*Topic:7. Create two class Time and Minute and add required getter and setter including constructors. 
Now you need to type cast Time object into Minute to fetch the minute from Time and display it. 
Example -  
 int main() 
{ 
       Time t1(2,30); 
       t1.display(); 
       Minute m1; 
       m1.display(); 
       m1=t1     // Fetch minute from time 
       t1.display(); 
       m1.display(); 
       return 0; 
} 
*/
#include <iostream>
using namespace std;

class Time
{
    int hr,min;
    public:
        Time()
        {

        }

        Time(int x,int y)
        {
            hr=x;
            min=y;
        }

        void display()
        {
            cout<<"Time: hour="<<hr<<" minute="<<min<<endl;
        }

        int getMin()
        {
            return (hr*60+min);
        }
};

class Minute
{
    int min;
    public:
        Minute()
        {
            min=0;
        }

        Minute(Time t)
        {
            min=t.getMin();
        }

        void display()
        {
            cout<<"Minute: minutes="<<min<<endl;
        }
};

int main()
{
    Time t1(2,30); 
    t1.display(); 
    Minute m1; 
    m1.display(); 
    m1=t1;    // Fetch minute from time 
    t1.display(); 
    m1.display(); 
    return 0; 
}