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
    int hours, mins, seconds;

public:
    // Default Constructor
    Time()
    {
        hours = 0;
        mins = 0;
        seconds = 0;
    }
    // Copy Constructor
    Time(const Time &Time)
    {
        hours = Time.hours;
        mins = Time.mins;
        seconds = Time.seconds;
    }
    //'==' equal to operator overloading
    bool operator==(Time t)
    {
        if (hours == t.hours && mins == t.mins && seconds == t.seconds)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    //'>>' insertion operator overloading
    friend istream& operator>>(istream &input, Time &t)
    {
        cout << "Enter Hour:";
        cin >> t.hours;
        cout << "Enter Mins:";
        cin >> t.mins;
        cout << "Enter Seconds:";
        cin >> t.seconds;
        return input;
    }
    //'<<' extraction operator overloading
    friend ostream& operator<<(ostream &os, Time t)
    {
        cout << "Hour:"<<t.hours<<" Min:"<<t.mins<< " Seconds:"<<t.seconds<<endl;
        return os;
    }
    
};

int main()
{

    Time t1, t2;
    cout<<"Enter First time:"<<endl<<"------------"<<endl;
    cin>>t1;
    cout<<"First time:"<<endl<<"-------------"<<endl<<t1;
    cout<<"Enter Second time:"<<endl<<"-----------"<<endl;
    cin>>t2;
    cout<<"Second time:"<<endl<<"-------------"<<endl<<t2;
    if(t1==t2)
    {
        cout<<"Times are same."<<endl;
    }
    else
    {
        cout<<"Times are not same."<<endl;
    }
    return 0;
}