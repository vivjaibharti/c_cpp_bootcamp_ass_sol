//Topic:1. Define a structure Employee with member variables id, name, salary
#include <stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
 struct employee e1,e2;
 e1.id=123;
 strcpy(e1.name,"Vivek Jaiswal");
 e1.salary=2000000;
 printf("Employee ID:%d\nEmployee Name:%s\nEmployee Salary:%.2f\n",e1.id,e1.name,e1.salary);
 return 0;

}