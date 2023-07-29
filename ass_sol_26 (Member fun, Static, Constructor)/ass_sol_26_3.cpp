//Topic:3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include <iostream>
using namespace std;

class Cube
{
 int side;
 public:
 Cube (int x)
 {
    side=x;
 }
 void cal_volume()
 {
    cout<<"Volume of Cube having side "<<side<<"= "<<side*side*side<<endl;
 }
};

int main()
{
    Cube c1(6),c2(85);
    c1.cal_volume();
    c2.cal_volume();
    return 0;
}