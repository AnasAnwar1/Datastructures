#include <iostream>
using namespace std;
int decimal(int n)
{
  int ans=0;
  int x=1;
  while (n>0)
  {
    int  t = n%10;
    ans += t*x;
    x *= 8;
    n /= 10;

  }
  return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<< decimal(n) <<endl;
    return 0;
}