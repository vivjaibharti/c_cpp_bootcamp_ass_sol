/*Topic:5. Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers.
*/
#include <iostream>
using namespace std;

class Numbers
{
    int x,y,z;
    public:
        Numbers()
        {
            x=0,y=0,z=0;
        }
        Numbers(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }
        Numbers( const Numbers &n)
        {
            x=n.x;
            y=n.y;
            z=n.z;
        }
        Numbers operator-()
        {
            Numbers temp;
            temp.x=-x;
            temp.y=-y;
            temp.z=-z;
            return temp;
        }
        void operator-(int useless)
        {
            x=-x;
            y=-y;
            z=-z;
        }
        void setData()
        {
            cout<<"Enter Value of x,y,z:";
            cin>>x>>y>>z;
        }
        void getData()
        {
            cout<<"Value of x= "<<x<<", y= "<<y<<" and z= "<<z<<endl;
        }
};


int main()
{
    Numbers n1,n2(5,6,8),n3(n2);
    n1.setData();
    n2=-n1;
    n1.getData();
    n2.getData();
    n3.getData();
    return 0;
}