//10. Define a class Area and define instance member functions to find the area of the
//different shapes like square, rectangle , circle etc.
#include<iostream>
using namespace std;

class Area
{
    private:
    int length_rectangle,breadth_rectanle,side_square,radius,area_rectangle,area_square;
    float area_circle;
    public:
    
    void square(int x)
    {
        side_square=x;
        area_square=side_square*side_square;
        cout<<"Area of square:"<<area_square<<endl;
    }

    void rectangle(int x, int y)
    {
        length_rectangle=x;
        breadth_rectanle=y;
        area_rectangle=length_rectangle*breadth_rectanle;
        cout<<"Area of rectangle:"<<area_rectangle<<endl;
    }

    void circle(int x)
    {
        radius=x;
        area_circle=3.14*radius*radius;
        cout<<"Area of circle:"<<area_circle<<endl;
    }
};

int main()
{
    Area a1;
    //a1.setData();
    a1.circle(5);
    a1.rectangle(5,10);
    a1.square(6);
    return 0;
}