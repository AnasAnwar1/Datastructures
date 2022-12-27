#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int *apr = &a;
    cout<<*apr<<endl;
    *apr= 30;
    cout<<*apr<<endl;
    // only arithmatic operation done on a pointer is ++, -- , += , -=... 
    int arr[]= {100, 200, 300};
    int *ptr= arr;
    for(int i=0; i<3; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    } 
     for(int i=0; i<3; i++)
    {
        cout<<*(arr+i)<<endl;
      
    } 
}