/*Topic:4. Create Product class and convert Product type to Item type using casting operator 
int main() 
{ 
       Item i1; 
       Product p1; 
       p1.setData(3,4); 
       i1=p1; 
       return 0; 
*/
#include <iostream>
using namespace std;

class Item
{
    int m,n;
    public:
        Item()
        {
            m=0;
            n=0;
        }

        void display()
        {
            cout<<"Item:m="<<m<<" n="<<n<<endl;
        }

        void setM(int x)
        {
            m=x;
        }

        void setN(int x)
        {
            n=x;
        }  

};

class Product
{
    int x,y;
    public:
        Product()
        {
            x=0;
            y=0;
        }

        void setData(int a,int b)
        {
            x=a;
            y=b;
        }

        int getData()
        {
            return x;
        }

        operator Item()
        {
            Item temp;
            temp.setM(x);
            temp.setN(y);
            return temp; 
        }


};

int main()
{
    Item i1; 
    Product p1; 
    p1.setData(3,4); 
    i1=(Item)p1;
    i1.display();
    return 0;
}