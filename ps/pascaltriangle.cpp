#include <iostream>
using namespace std;
int fact(int n)
{
    int fact=1;
    for ( int i = n; i >= 1; i--)
    {
        fact= fact*i;
    }
  return fact;
}
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
      }
     cout<<endl;
    }
    return 0;
}