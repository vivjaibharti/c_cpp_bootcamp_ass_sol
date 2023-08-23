//Topic:3. Overload subscript operator [] that will be useful when we want to check for an index out of bound.
#include <iostream>
using namespace std;

class Array
{
    int *a;
    int size;
    public:
        Array()
        {
            cout<<"Enter size of array:"<<endl;
            cin>>size;
            a=(int *)malloc(size*sizeof(int));
        }

        Array(int size)
        {
            this->size=size;
            a=(int *)malloc(size*sizeof(int));
        }

        Array(const Array &temp)
        {
            size=temp.size;
            a=(int *)malloc(size*sizeof(int));
            for(int i=0;i<size;i++)
            {
                a[i]=temp.a[i];
            }
        }

        void setData(int n,int index)
        {
             if(index>size)
             {
                cout<<"Array Index out of bound size."<<endl;
                return;
             }
             a[index]=n;
        }

        void display(int index)
        {
            if(index>size)
             {
                cout<<"Array Index out of bound size."<<endl;
                return;
             }
            cout<<"Element at index no. "<<index<<" : "<<a[index]<<endl;
        }

        int operator[](int index)
        {
            if(index>size)
             {
                cout<<"Array Index out of bound size."<<endl;
                exit(0);
             }
             return a[index];
        }

        ~Array()//Destructor
        {
            cout<<"Destructor Called."<<endl;
            free(a);
        }
};


int main()
{
    Array a1,a2(10);
    a1.setData(10,10);
    a1.display(10);
    cout<<a1[10]<<endl;

    // Array a3=a1;//error
    // a3.display(10);//error

    return 0;
}