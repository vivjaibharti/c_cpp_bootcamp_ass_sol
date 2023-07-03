//Topic:3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include <stdio.h>
void sort(int *,int);
int main()
{

 int a[5]={1,-8,9,-254,0};
 printf("Array before sorting:");
 for(int i=0;i<5;i++)
 {
    printf("%d ",a[i]);
 }
 sort(a,5);
 printf("\nArray after sorting:");
 for(int i=0;i<5;i++)
 {
    printf("%d ",a[i]);
 }
 
 return 0;

}

void sort(int *ptr,int size)
{
    for(int i=size-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(*(ptr+j)>*(ptr+(j+1)))
            {
                int temp=*(ptr+j);
                *(ptr+j)=*(ptr+(j+1));
                *(ptr+(j+1))=temp;
            }
            
            // if(ptr[j]>ptr[j+1])
            // {
            //     int temp=ptr[j];
            //     ptr[j]=ptr[j+1];
            //     ptr[j+1]=temp;
            // }
        }
    }
}