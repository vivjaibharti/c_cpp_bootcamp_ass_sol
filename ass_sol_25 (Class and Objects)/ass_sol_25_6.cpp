//Topic:6. Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.

#include <iostream>
using namespace std;

class Square
{
 private:
 int x;
 int y;
 static int count;
 
 public:
 void setData()
   {
      cout<<"Enter an integer:";
      cin>>x;
      count++;
   }
 int cal_square()
 {
    y=x*x;
    count++;
    return x;
 }
 void getData()
   {
      count++;
      cout<<"Square of x="<<y<<endl;
   }
 static void getCount()
 {
   count++;
   cout<<"Number of times any fuunction has been called:"<<count<<endl;
 };

};

int Square::count=0;

int main()
{

 Square s1,s2,s3;
 s1.setData();
 s1.cal_square();
 s1.getData();
 s2.setData();
 s2.cal_square();
 s2.getData();
 s1.getCount();
 s2.getCount();
 return 0;
}