//Topic:4. Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class.
#include <iostream>
using namespace std;

class LargestNumber
{
    int largest;
 public:
    void find_Largest(int x,int y, int z)
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
        cout<<"Largest number among "<<x<<","<<y<<","<<z<<"="<<largest<<endl;
    }
};


int main()
{

 LargestNumber l1,l2;
 l1.find_Largest(10,20,-9);
 l2.find_Largest(20,-2568,-7);
 
 return 0;
}