//Topic:6. Define a class student and write a program to enter student details using constructor and define member function to display all the details.
#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    char rollno[9],name[50],progName[100],progCode[5],email[50],address[150];
    char mob[11];
    public:
    Student()
    {
        // fflush(stdin);
        // fgets(name,8,stdin);
        cin.ignore();// Ignore newline character left in buffer

        cout<<"Enter Student Name: ";
        cin.getline(name,sizeof(name));// Use sizeof() to specify buffer size.

        // fflush(stdin);
        // fgets(rollno,50,stdin);
        cout<<"Enter Student Rollno: ";
        cin.getline(rollno,sizeof(rollno));

        // fgets(progName,100,stdin);
        cout<<"Enter the Programme Name: ";
        cin.getline(progName,sizeof(progName));

         // fgets(progCode,5,stdin);
        cout<<"Enter the Programme Code: ";
        cin.getline(progCode,sizeof(progCode));

        // fgets(email,50,stdin);
        cout<<"Enter Your Email Id: ";
        cin.getline(email,sizeof(email));

        cout<<"Enter Contact Number: ";
        cin.getline(mob,sizeof(mob));

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