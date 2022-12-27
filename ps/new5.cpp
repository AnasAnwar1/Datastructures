#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for ( int counter = 0; counter <= n; counter++)
    {
        sum=sum+counter;
    }
    cout<<sum<<endl;
}