//Topic:Define a function to check whether a given number is a term in a Fibonacci series or not.

#include <iostream>
using namespace std;
int fibonaaci(int);

int main()
{

    int n,count=0;
    cout<<"Enter the number for checking: ";
    cin>>n;

    //for loop to check the given number is in fibonaaci series or not.
    for(int i=1;;i++)
    {
        count++;
        if(n==fibonaaci(i))
        {
            cout<<"The number is present in the fibonaaci series."<<endl;
            break;
        }
        else if(n<fibonaaci(i))
        {
            cout<<"The number is not present in the fibonaaci series."<<endl;
            break;
        }

    }

    //for loop to print the fibonaaci series.
    for(int i=1;i<=count;i++)
    {
        cout<<fibonaaci(i);
        if(i<count)
        {
            cout<<",";
        }
        else
        {
            cout<<".";
        }
    }
    cout<<endl;
    return 0;
}

int fibonaaci(int x)
{
    int f1=0,f2=1,temp;
    if(x==1)
    {
        return 0;
    }
    else if(x==2)
    {
        return 1;
    }
    else
    {
        for(int i=3;i<=x;i++)
        {
            temp=f1+f2;
            f1=f2;
            f2=temp;
        }
        return temp;
    }
        
    
}