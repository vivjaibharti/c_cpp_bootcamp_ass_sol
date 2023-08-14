/*Topic:4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1.  = = : To check whether two Times are the same or not.
2.  >>  : To accept the time.
3.  <<  : To display the time.
Output -ScreenShot Given...
*/

#include <iostream>
using namespace std;

class Time
{
    int hours,mins,seconds;
    public:
        void operator>>(Time)
        {
            
        }
};


int main()
{
    
    Time t1,t2;
    t1>>;
    return 0;
}