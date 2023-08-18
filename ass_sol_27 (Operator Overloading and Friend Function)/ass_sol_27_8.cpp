/*Topic:8. Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the -(Unary) should negate the numbers stored in the object.
Output - as shown in Screenshot.
*/

#include <iostream>
using namespace std;

class Matrix
{
    int a[3][3];
    public:
    Matrix()
    {

    }

    void setData()
    {
        cout<<"Enter Matrix Elements (3X3):"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }

    void getData()
    {
        cout<<"Matrix is :"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
       
    }

    Matrix operator-()
    {
        Matrix temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.a[i][j]=-a[i][j];
            }
        }
        return temp;
    }
};


int main()
{
    Matrix m1,m2;
    m1.setData();
    m1.getData();
    m2=-m1;
    m2.getData();
    -m1;
    m1.getData();
    return 0;
}