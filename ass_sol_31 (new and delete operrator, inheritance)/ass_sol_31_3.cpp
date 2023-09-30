/*Topic:3. Write a C++ program to calculate the percentage of a student using multi-level inheritance. Accept the marks of three subjects in base class. A class will be derived from the above mentioned class which includes a function to find the total marks obtained and another class derived from this class which calculates and displays the percentage of students.
*/
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    private:
        string name;
        string rollno;
        struct dob
        {
            int day;
            int month;
            int year;
        };
        struct dob db1;
        int math,science,english;
    public:
        void setData()
        {
            cout<<"Enter Student Details: "<<endl;
            cout<<"Enter Name: ";
            getline(cin,name);
            cout<<"Enter Roll No.: ";
            getline(cin,rollno);
            cout<<"Enter DOB: "<<endl;
            cout<<"Enter Day: ";
            cin>>db1.day;
            cout<<"Enter month: ";
            cin>>db1.month;
            cout<<"Enter Year: ";
            cin>>db1.year;
            cout<<"Enter Details of Marks :"<<endl;
            cout<<"Enter Math Marks: ";
            cin>>math;
            cout<<"Enter Science Marks: ";
            cin>>science;
            cout<<"Enter English Marks: ";
            cin>>english;
        }
        Student()
        {
            setData();
        }
        int getMath()
        {
            return math;
        }
        int getScience()
        {
            return science;
        }
        int getEnglish()
        {
            return english;
        }
        string getName()
        {
            return name;
        }
        string getRollno()
        {
            return rollno;
        }
        string getDob()
        {
           string slash="/";
           return to_string(db1.day)+ slash + to_string(db1.month) + "/" + to_string(db1.year);
        }

};

class CalMarks:public Student
{
    private:
        int totalMarks;
    public:
        int getTotalMarks()
        {
            totalMarks=getMath()+getScience()+getEnglish();
            return totalMarks;
        }
};

class CalPercentage:public CalMarks
{
    float percentage;
    public:
        void calculatePercentage()
        {
            percentage=getTotalMarks()/3;
        }
        void display()
        {
            cout<<"##############################"<<endl;
            cout<<"Student Information: "<<endl;
            cout<<"Name: "<<getName()<<endl;
            cout<<"Roll No.: "<<getRollno()<<endl;
            cout<<"DoB: "<<getDob()<<endl;
            cout<<"Percentage: "<<percentage<<endl;
        }
};

int main()
{
    CalPercentage p1;
    p1.calculatePercentage();
    p1.display();
    return 0;
}