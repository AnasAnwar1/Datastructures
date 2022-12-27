#include <iostream>
using namespace std;
int gcdoftwo(int a , int b){

   if(a==0)
   return b;

   if(b==0)
   return a;

   if(a==b)
   return a;

   if(a>b)
   return gcdoftwo(a-b,b);

   else
   return gcdoftwo(a,b-a);

}
int main()
{
    int a,b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    
    cout<<"GCD of "<<a<<" and "<<b<<" is:"<<gcdoftwo(a,b)<<endl;
}