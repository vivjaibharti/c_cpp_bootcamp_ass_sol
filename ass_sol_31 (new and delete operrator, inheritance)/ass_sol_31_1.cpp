/*Topic:1. Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary
*/
#include <iostream>
#include <string>
using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:
        void setName()
        {
            cout<<"Enter Name:";
            getline(cin,name);
        }
        void setAge()
        {
            cout<<"Enter Age:";
            cin>>age;
        }
        void getName()
        {
            cout<<"Name: "<<name;
        }
        void getAge()
        {
            cout<<"Age: "<<age;
        }
};

class Employee:public Person
{
    private:
        int empid;
        float salary;
    public:
        void setEmpid()
        {
            cout<<"Enter Employee ID: ";
            cin>>empid;
        }
        void setSalary()
        {
            cout<<"Enter Salary:";
            cin>>salary;
        }
        void getEmpid()
        {
            cout<<"Employee ID: "<<empid<<endl;
        }
        void getSalary()
        {
            cout<<"Employee Salary: "<<salary<<endl;
        }
};

int main()
{
    
    
    
    return 0;
}