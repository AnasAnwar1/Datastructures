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

int lcmoftwo(int a, int b){

    return (a/gcdoftwo(a,b))*b;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    
    cout<<"LCM of "<<a<<" and "<<b<<" is:"<<lcmoftwo(a,b)<<endl;
}