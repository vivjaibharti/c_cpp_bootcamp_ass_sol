//Topic:4. Define a function to print Pascal Triangle up to N lines.
#include <iostream>
using namespace std;
int factorial(int);
int comb(int,int);

int main()
{
  int n;
  cout<<"Enter the number of rows for pascal triangle: "<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<i;j++)
    {
        cout<<comb(i,j);
    }
    cout<<endl;
  }
  return 0;
}

int factorial(int x)
{
    if(x<=0)
    {
        return 1;
    }
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int comb(int n, int r)
{
    int combination;
    combination=factorial(n)/(factorial(r)*factorial(n-r));
    return combination;
}