//Topic:1. Define a function to check whether a given number is a Prime number or not.
#include <iostream>
using namespace std;
void check(int);

int main()
{
 int x;
 cout<<"Enter a number :";
 cin>>x;
 check(x);
 return 0;
}

void check(int a)
{
      int count=0;
      for(int i=1;i<=a;i++)
      {
        if(a%i==0)
        {
            count++;
        }
        if(count>2)
        {
            cout<<"The number "<<a<<" is a non-prime number."<<endl;
            break;
        }
      }
      if(count<=2)
      {
        cout<<"The number "<<a<<" is a prime number."<<endl;
      }

}