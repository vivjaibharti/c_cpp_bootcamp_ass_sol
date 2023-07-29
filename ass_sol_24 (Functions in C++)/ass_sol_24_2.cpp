//Topic:2. Define a function to find the highest value digit in a given number.
#include <iostream>
#include <limits.h>
using namespace std;
void highest_value(int);
int main()
{

 int x;
 cout<<"Enter the number:"<<endl;
 cin>>x;
 highest_value(x);
 
 return 0;
}

void highest_value(int temp)
{
    int max=INT_MIN;
    while(temp)
    {
        if(max<temp%10)
        {
            max=temp%10;
            temp=temp/10;
        }
        else
        {
            temp=temp/10;
        }
    }
    cout<<"The highest digit of the given number is: "<<max;
}