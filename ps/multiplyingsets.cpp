#include <iostream>
using namespace std;
int main()
{
    int k,n,m,i,j,a[100],b[100],c[100];
    cout<<"Enter the array1:";
    cin>>n;
    cout<<"Enter the elements of array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the array 2:";
    cin>>m;
    cout<<"Enter the elements of array2:";
    for(j=0;j<m;j++)
    {
        cin>>b[j];
    }
  for ( i = 0; i < n; i++)
  {
    for ( j = 0; j < m; j++)
    {
       
    if (a[i]!=b[j])
        {
            cout<<a[i]<<" ";
            cout<<b[j]<<" ";
        }
        cout<<"\n";
        
        
    }
    
  }
  
   return 0;
}