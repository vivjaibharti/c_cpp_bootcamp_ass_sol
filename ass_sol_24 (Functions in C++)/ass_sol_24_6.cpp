//Topic:6. Define a function to swap data of two int variables using call by reference.
#include <iostream>
using namespace std;

class 
{
 
};
void swap(int ,int);

int main()
{
    int a,b;
    cout<<"Enter value of a and b:"<<endl;
    cin>>a,b;
    swap(&a,&b);
 
 
 return 0;
}

void swap(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}