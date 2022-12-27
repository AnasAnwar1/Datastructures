#include <iostream>
using namespace std;
int patern(int n)
{
  
    if (n>0)
    {
        cout<<n<<" ";
        patern(n-5);
    }
   
    cout<<n<<" ";
    
    
}
int main()
{
    int n,i;
    cin>>n;
    cout<<patern(n)<<endl;
   return 0;
}