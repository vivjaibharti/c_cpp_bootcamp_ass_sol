#include <iostream>
 using namespace std;
int sum(int *p)
{
  int sum=0;
  for(int i=0;i<5;i++)
    {
      sum=sum+(*p+i);
    }

  return sum;
}

int main() {
  cout << "Hello World!\n";
  int a[5]={1,2,3,4,5};
  printf("Sum=%d",sum(a));
  return 0;
}

 

