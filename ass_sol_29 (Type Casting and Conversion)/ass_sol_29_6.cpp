/*Topic:6.  Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in int ) to Time class.  
 
Example- 
int main() 
{ 
       int duration; 
       cout<<”Enter time duration in minutes”; 
       cin>>duration; 
       Time t1 = duration; 
       t1.display(); 
       return 0; 
}
*/
#include <iostream>
using namespace std;

class Time
{
    int sec;
    public:
        Time()
        {

        }

        Time(int min)
        {
            sec=min*60;
        }

        void display()
        {
            cout<<"Time: seconds="<<sec<<endl;
        }
};


int main()
{
    int duration; 
    cout<<"Enter time duration in minutes:"; 
    cin>>duration; 
    Time t1 = duration; 
    t1.display(); 
    return 0;
}