//Topic:7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include <iostream>
using namespace std;


int sumDefault_Arg(int a,int b=0,int c=0);

int main()
{
    int c=12;
    cout<<"Sum of three numbers:"<<sumDefault_Arg(12); 
 
    return 0;
}

int sumDefault_Arg(int x,int y,int z)
{
    return (x+y+y);
}