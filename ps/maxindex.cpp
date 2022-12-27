#include <iostream>
using namespace std;
int main()
{
    int n,a[100],mx=-9999999,i;
    cin>>n;
    cout<<"Enter the elements of array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        cout<<mx<<endl;
    }
    return 0;
}