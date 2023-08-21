/*Topic:10.
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
Output -as shown in scrrenshot...
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

        void setdata()
        {
            cout<<"Enter matrix elements (3X3):"<<endl;
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
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        Matrix operator+(Matrix &m)
        {
            Matrix temp;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    temp.a[i][j]=a[i][j]+m.a[i][j];
                }
            }
            return temp;
        }
};


int main()
{
    Matrix m1,m2,m3;
    m1.setdata();
    cout<<"First Matrix :"<<endl;
    m1.getData();

    m2.setdata();
    cout<<"Second Matrix :"<<endl;
    m2.getData();

    cout<<"Addition of Matrix:"<<endl;
    m3=m1+m2;
    m3.getData();
    
    return 0;
}