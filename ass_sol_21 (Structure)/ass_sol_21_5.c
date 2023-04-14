//Topic:5. Write a function to sort employees according to their salaries [ refer structure from question 1.
#include <stdio.h>

struct emp{
    int id;
    char name[50];
    float salary;
};
void sort(struct emp *ptr,int n)
{
    struct emp *sorted[n];
    //int i=0;
    int salary=(ptr+0)->salary;

    for(int i=n-1;i>=0;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((ptr+j)->salary>(ptr+(j+1))->salary)
            {
                //swapping
                struct emp temp
                sorted[j]=
            }
        }
    }
}

int main()
{

 

 return 0;

}