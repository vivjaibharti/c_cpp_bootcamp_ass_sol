/*Topic:9. Define a class Bill and define its member function get() to take detail of customer,calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit.
From 100 to 200 unit RS. 2 per unit.
Above 200 units RS. 3 per unit.*/
#include <iostream>
using namespace std;

class Bill
{
  char customer_id[20];
  char customer_address[150];
  char meter_no[50];
  float unit_consumed;
  static float rate_upto_100;
  static float rate_from_100_200;
  static float rate_above_200;

  public:
  void get()
  {
    // cout<<"Enter Customer id:";
    // cin.getline(customer_id,sizeof(customer_id));

    // cout<<"Enter Customer's Address:";
    // cin.getline(customer_address,sizeof(customer_address));

    // cout<<"Enter Meter No.:";
    // cin.getline(meter_no,sizeof(meter_no));

    cout<<"Enter Unit Consumed:";
    cin>>unit_consumed;
  }

  float calculateBill()
  {
    float billAmount;
    if(unit_consumed<100)
    {
        return billAmount=unit_consumed*rate_upto_100;
    }
    else if(unit_consumed>=100 && unit_consumed<=200)
    {
        return billAmount=100*rate_upto_100+(unit_consumed-100)*rate_from_100_200;
    }
    else
    {
        return billAmount=100*rate_upto_100+100*rate_from_100_200+(unit_consumed-200)*rate_above_200;
    }
  }
};

float Bill::rate_upto_100=1.20;
float Bill::rate_from_100_200=2;
float Bill::rate_above_200=3;

int main()
{

 Bill b1,b2;
 b1.get();
 cout<<"Bill of Customer b1:"<<b1.calculateBill(); 
 return 0;
}