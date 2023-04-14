//Topic:10. Write a C++ program to add all the numbers of an array of size 10
#include <iostream>
using namespace std;

int main()
{

 int arr[10],i,sum=0;
 // give input of 10 integers.
 cout<<"Enter the numbers in array:";
 for(i=0;i<10;i++)
 {
    cin>>arr[i];
    sum=sum+arr[i];
 }
 cout<<"Sum all the numbers of an array="<<sum;
 
 return 0;
}