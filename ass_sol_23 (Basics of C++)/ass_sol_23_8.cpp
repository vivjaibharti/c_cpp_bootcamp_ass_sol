//Topic:8. Write a C++ program to swap values of two int variables without using third variable.

#include <iostream>
using namespace std;

int main()
{

 int x,y;
 cout<<"Enter value of x:";
 cin>>x;
 cout<<"Enter value of y:";
 cin>>y;
 x=x+y;
 y=x-y;
 x=x-y;
 cout<<"After Swapping value of x="<<x<< " and y="<<y;
 return 0;
}