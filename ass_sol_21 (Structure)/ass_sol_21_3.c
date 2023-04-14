//Topic:3. Write a function to display employee data. [ Refer structure from question 1 ]
#include <stdio.h>
struct employee
{
    int id;
    char name[50];
    float salary;
};
void display(struct employee *);
int main()
{

 struct employee e[5];
//  printf("Enter employee e1 id:");
//  scanf("%d",&e[0].id);
//  printf("Enter employee e1 name:");
//  gets(e1.name);
//  scanf("%s",e[0].name);
//  printf("Enter employee e1 salary:");
//  scanf("%f",&e[0].salary);
//  printf("Details of employee e1:\nEmployee Id:%d\nEmployee Name:%s\nEmployee Salary:%.2f",e[0].id,e[0].name,e[0].salary);
 
 int i,n=1;
 for(i=0;i<3;i++)
 {
    printf("Enter employee e%d id:",n);
    scanf("%d",&e[i].id);
    printf("Enter employee e%d name:",n);
    scanf("%s",&e[i].name);
    printf("Enter employee e%d salary:",n);
    scanf("%f",&e[i].salary);
    n++;
 }

    display(&e[0]);
 return 0;

}
void display(struct employee *ptr)
{
    int id;
    printf("Enter the employee id to get its detail:");
    scanf("%d",&id);
    for(int i=0;i<3;i++)
    {
        if((ptr+i)->id==id)
        {
            printf("Details of employee:\n");
            printf("Employee ID:%d\nEmployee Name:%s\nEmployee Salary:%.2f\n",(ptr+i)->id,(ptr+i)->name,(ptr+i)->salary);
            
        }
       
        
    }
    

}