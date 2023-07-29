/*Topic:2. Define a class Time to represent a time with instance variables h,m and s to store hour, minute and second.
Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)
*/
#include <iostream>
using namespace std;

class Time
{
 int h;
 int m;
 int s;

 public:
   void setTime(int x,int y,int z)
   {
      h=x;
      if(h>0 && h<=12)
      {

      }
      else{
         cout<<"Invalid Input in hour"<<endl;
      }
      m=y;
      s=z;
   }
   void showtime()
   {
      cout<<h<<":"<<m<<":"<<s<<endl;
   }
   void normalize()
   {

   }
   Time add(Time t0)
   {
      Time t;
      t.h=h+t0.h;
      t.m=m+t0.m;
      t.s=s+t0.s;
      return t;
   }
};


int main()
{
    Time t1,t2,t3;
    t1.setTime(13,13,14);
    t2.setTime(5,45,30);
    t1.showtime();
    t2.showtime();
    t3=t1.add(t2);
    t3.showtime();
 
    return 0;
}