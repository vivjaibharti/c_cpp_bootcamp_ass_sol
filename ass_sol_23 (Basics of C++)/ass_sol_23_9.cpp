//Topic:9. Write a C++ program to find the maximum of two numbers.

#include <iostream>
using namespace std;

int main()
{

 int x,y;
 cout<<"Enter value of x:";
 cin>>x;
 cout<<"Enter value of y:";
 cin>>y;
 if(x>y)
 cout<<"Max is x.";
 else
 cout<<"Max is y.";
//  (x>y)?cout<<"x is Max";:cout<<"y is Max";
 
 return 0;
}