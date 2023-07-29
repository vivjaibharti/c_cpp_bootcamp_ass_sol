//Topic:6. Define a class student and write a program to enter student details using constructor and define member function to display all the details.
#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    char rollno[8],name[50],progName[100],progCode[5],email[50],address[150];
    int mob;
    public:
    Student()
    {
        cout<<"Enter Student Name: ";
        // fflush(stdin);
        // fgets(name,8,stdin);
        // cin.ignore();
        cin.getline(name,50);
        cout<<"Enter Student Rollno: ";
        // fflush(stdin);
        // fgets(rollno,50,stdin);
        // cin.ignore();
        cin.getline(rollno,50);
        cout<<"Enter the Programme Name: ";
        // fgets(progName,100,stdin);
        // cin.ignore();
        cin.getline(progName,100);
        cout<<"Enter the Programme Code: ";
        // fgets(progCode,5,stdin);
        // cin.ignore();
        cin.getline(progCode,5);
        cout<<"Enter Your Email Id: ";
        // fgets(email,50,stdin);
        // cin.ignore();
        cin.getline(email,50);
        cout<<"Enter Contact Number: ";
        cin>>mob;

    }
    void display()
    {
        cout<<"Details of Student:"<<endl;
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Roll No.: "<<rollno<<endl;
        cout<<"Student Programme: "<<progCode<<endl;
        cout<<"Student Email Id: "<<email<<endl;
        cout<<"Student Contact: "<<mob<<endl;
        
    }
};


int main()
{
 Student s1;
 s1.display();
 return 0;
}