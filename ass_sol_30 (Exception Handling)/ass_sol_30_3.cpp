//Topic:3. Write a C++ program to perform arithmetic operations on two numbers and throw an exception if the dividend is zero or does not contain an operator.
#include <iostream>
using namespace std;


int main()
{
    int num1,num2,result;
    char operatoor;

    cout<<"Enter a value of operand_1:";
    cin>>num1;
    cout<<"Enter a value of operand_2:";
    cin>>num2;
    cout<<"Enter any arithmetic operator:";
    cin>>operatoor;
    try
    {
        if(operatoor!='+' && operatoor!='-' && operatoor!='*' && operatoor!='/')
        {
            throw "Error: Operator Error";
        }
    }
    catch(const char *c)
    {
        cout<<c<<endl;
    }
    
    switch(operatoor)
    {
        case '+':
            result=num1+num2;
            break;
        
        case '-':
            result=num1-num2;
            break;

        case '*':
            result=num1*num2;
            break;
        
        case '/':
            try
            {
                if(num1==0)
                {
                    throw "Error: Dividend Error.";
                }
            }
            catch(const char *s)
            {
                cout<<s<<endl;
            }
            result=num1/num2;
            break;
    }

    cout<<result<<endl;
    return 0;
}