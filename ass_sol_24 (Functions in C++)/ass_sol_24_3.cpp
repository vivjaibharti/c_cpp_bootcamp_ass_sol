//Topic:3. Define a function to calculate x raised to the power y.
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int power(int,int);

int main()
{

 int x,y,z;
 cout<<"Enter the base numner:";
 cin>>x;
 cout<<"Enter the exponent of the number:";
 cin>>y;
 //z=pow(x,y);
 z=power(x,y);
 cout<<"The required no. of "<<x<<" to the power "<<y<<" = "<<z;
 return 0;

}

int power(int a,int b)
{
    int c =1;
    if(b==0)
    {
        return c;
    }

    else
    {
        for(int i=1;i<=b;i++)
        {
            c *=a;
        }
        return c;
    }
}
