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
        string getName()
        {
            return name;
        }
        int getAge()
        {
            return age;
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
        int getEmpid()
        {
            return empid;
        }
        float getSalary()
        {
            return salary;
        }
        void getAllDetails()
        {
            cout<<"#############################"<<endl;
            cout<<"Employee ID: "<<empid<<endl;
            cout<<"Employee Name: "<<getName()<<endl;
            cout<<"Employpee Age: "<<getAge()<<endl;
            cout<<"Employpee Salary: "<<getSalary()<<endl;
        }
};

int main()
{
    Employee e1;
    e1.setName();
    e1.setAge();
    e1.setEmpid();
    e1.setSalary();
    e1.getAllDetails();
    return 0;
}