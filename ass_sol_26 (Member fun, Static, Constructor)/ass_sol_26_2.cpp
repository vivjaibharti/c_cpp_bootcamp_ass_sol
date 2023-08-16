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
      m=y;
      s=z;
   }

   void showtime()
   {
      cout<<h<<":"<<m<<":"<<s<<endl;
   }

   void normalize()
   {
      h=h+m/60;
      m=m%60;
      m=m+s/60;
      s=s%60;
   }

   Time add(Time t0)
   {
      Time temp;
      temp.h=h+t0.h;
      temp.m=m+t0.m;
      temp.s=s+t0.s;
      temp.normalize();
      return temp;
   }
};


int main()
{
    Time t1,t2,t3;
    t1.setTime(13,13,14);
    t2.setTime(5,65,80);
    t1.showtime();
    t2.showtime();
    t3=t1.add(t2);
    t3.showtime();
 
    return 0;
}