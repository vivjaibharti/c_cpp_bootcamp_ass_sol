/*Topic:10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to Dollar and Dollar to Rupee conversion. 
 
Example- 
int main() 
 { 
    Rupee r = 23; 
    Dollar d = r;   // Rupee to Dollar conversion 
  
    d.display(); 
    r.display(); 
 
    r = d;        // Dollar to Rupee Conversion 
    d.display(); 
    r.display(); 
  
    return 0; 
}
*/
#include <iostream>
using namespace std;

class Rupee
{
    float r;
    public:
        Rupee(){}
        
        Rupee(float x)
        {
            r=x;
        }

        void display()
        {
            cout<<"Rupee: ₹="<<r<<endl;
        }

        float getR()
        {
            return r;
        }

        void setR(int x)
        {
            r=x;
        }
};

class Dollar
{
    float d;
    public:
        Dollar(){}

        Dollar(float f)
        {
            d=f;
        }

        Dollar(Rupee r)
        {
            d=((r.getR())/84);
        }

        operator Rupee()
        {
            Rupee temp;
            temp.setR(d*84);
            return temp;
        }

        void display()
        {
            cout<<"Dollar: $="<<d<<endl;
        }
};


int main()
{
    Rupee r = 86; 
    Dollar d = r;   // Rupee to Dollar conversion 
  
    d.display(); 
    r.display(); 
 
    r = d;        // Dollar to Rupee Conversion 
    d.display(); 
    r.display(); 
  
    return 0;
    
}