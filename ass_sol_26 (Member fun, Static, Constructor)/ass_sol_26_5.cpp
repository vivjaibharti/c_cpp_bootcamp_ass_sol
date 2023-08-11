//Topic:5. Define a class Date and write a program to Display Date and initialise date object using Constructors.
#include <iostream>
using namespace std;

class Date
{
 char day[2],month[2],year[4];
 public:
 Date ()
 {
    cout<<"Enter the day in DD format :";
    for(int i=0;i<sizeof(day)/sizeof(char);i++)
    {
        cin>>day[i];
    }

    cout<<"Enter the month in MM format :";
    for(int i=0;i<sizeof(month)/sizeof(char);i++)
    {
        cin>>month[i];
    }

    cout<<"Enter the year in the YYYY format :";
    for(int i=0;i<sizeof(year)/sizeof(char);i++)
    {
        cin>>year[i];
    }
 }
 void display ()
 {
    for(int i=0;i<sizeof(day)/sizeof(char);i++)
    {
        cout<<day[i];
    }
    cout<<"/";
    for(int i=0;i<sizeof(month)/sizeof(char);i++)
    {
        cout<<month[i];
    }
    cout<<"/";
    for(int i=0;i<sizeof(year)/sizeof(char);i++)
    {
        cout<<year[i];
    }
    cout<<endl;
 }
};


int main()
{

 Date d1;
 d1.display();
 Date d2;
 d2.display();
 return 0;
}