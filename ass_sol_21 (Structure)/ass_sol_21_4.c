//Topic:4. Write a function to find the highest salary employee from a given array of 10 employees [Refer structure from ques. 1]
#include <stdio.h>
#include <string.h>
struct emp{
    int id;
    char name[50];
    float salary;
};
void highest_salary(struct emp *ptr)
{
    int index;
    float salary=(ptr+0)->salary;
    for(int i=0;i<6;i++)
    {
        if((ptr+i)->salary>salary)
        {
            salary=(ptr+i)->salary;
            index=i;
        }
    }
    printf("Details of employee having highest salary:\n");
    printf("Employee id=%d\n",(ptr+index)->id);
    printf("Employee Name:%s\n",(ptr+index)->name);
    printf("Employee Salary:%f\n",(ptr+index)->salary);
};
int main()
{
    struct emp e[6];
    e[0].id=20231;
    strcpy(e[0].name,"Vivek");
    e[0].salary=100;

    e[1].id=20232;
    strcpy(e[1].name,"Aman");
    e[1].salary=200;

    e[2].id=20233;
    strcpy(e[2].name,"Dogga");
    e[2].salary=300;

    e[3].id=20234;
    strcpy(e[3].name,"Wick");
    e[3].salary=400;

    e[4].id=20235;
    strcpy(e[4].name,"Dhruv");
    e[4].salary=500;

    e[5].id=20236;
    strcpy(e[5].name,"Naagraj");
    e[5].salary=600;
    
    highest_salary(&e[0]);

 return 0;
}