/*Topic:2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]*/
#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{

 struct employee e1;
 printf("Enter employee e1 id:");
 scanf("%d",&e1.id);
 printf("Enter employee e1 name:");
 //gets(e1.name);
 fflush(stdin);
 fgets(e1.name,50,stdin);
 printf("Enter employee e1 salary:");
 scanf("%f",&e1.salary);
 printf("Details of employee e1:\nEmployee Id:%d\nEmployee Name:%sEmployee Salary:%.2f",e1.id,e1.name,e1.salary);

 return 0;

}