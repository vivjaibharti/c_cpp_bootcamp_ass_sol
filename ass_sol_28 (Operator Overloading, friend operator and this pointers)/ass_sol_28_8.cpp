/*
Topic:8. Create a Coordinate class for 3 variables x,y and z and overload comma operator such that when you write  c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and c3 are objects of 3D coordinate class
*/
#include <iostream>
using namespace std;

class Coordinate
{
    int x,y,z;
    public:
        Coordinate()
        {
            x=0,y=0,z=0;
        }

        Coordinate(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }

        Coordinate(const Coordinate &c)
        {
            x=c.x;
            y=c.y;
            z=c.z;
        }

       Coordinate operator,(Coordinate c)
        {
            Coordinate temp;
            temp.x=c.x;
            temp.y=c.y;
            temp.z=c.z;
            return temp;
        }

        void setData(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }

        void display()
        {
            cout<<"("<<x<<" , "<<y<<" , "<<z<<" )"<<endl;
        }
};


int main()
{
    Coordinate c1,c2,c3(14,14,14),c4;
    c2.setData(1,1,1);
    c2.display();
    c4=(c1,c2,c3);
    c4.display();
    return 0;
}