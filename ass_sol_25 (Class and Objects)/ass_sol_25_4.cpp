//Topic:4. Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class.
#include <iostream>
using namespace std;

class LargestNumber
{
    int x,y,z,largest;
 public:
    void set_data()
    {
        cout<<"Enter value of x,y,z respectively:";
        cin>>x>>y>>z;
    }
    void find_Largest()
    {
        if(x>y)
        {
            if(x>z)
            {
                largest=x;
            }
            else
            {
                largest=z;
            }
        }
        else
        {
            if(y>z)
            {
                largest=y;
            }
            else
            {
                largest=z;
            }
        }
        cout<<"Largest number among "<<x<<","<<y<<", and "<<z<<"="<<largest<<endl;
    }
};


int main()
{

 LargestNumber l1,l2;
 l1.set_data();
 l1.find_Largest();
 l2.set_data();
 l2.find_Largest();
 
 return 0;
}