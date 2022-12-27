#include <iostream>
using namespace std;
int main()
{
    int n,reverse=0,t;
    cout<<"Enter a number:";
    cin>>n;
    
   while (n>0)
   {
      t=n%10;
      reverse= (reverse*10 + t);
      n=n/10;
   }
   
    cout<<reverse<<endl;
    return 0;
}