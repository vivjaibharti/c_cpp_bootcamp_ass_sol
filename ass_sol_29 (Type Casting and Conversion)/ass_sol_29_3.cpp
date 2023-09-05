/*Topic:3. Create a Product class and convert Product type to Item type using constructor 
int main() 
{ 
       Item i1; 
       Product p1; 
       p1.setData(3,4); 
       i1=p1; 
       return 0; 
}
*/
#include <iostream>
using namespace std;

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

};

class Item
{
    int m,n;
    public:
        Item()
        {
            m=0;
            n=0;
        }

        Item(Product p)
        {
            m=p.getData();
            n=p.getData();
        }

        void display()
        {
            cout<<"Item:m="<<m<<" n="<<n<<endl;
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