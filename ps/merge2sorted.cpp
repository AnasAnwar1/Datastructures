#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j,k,a[10],b[10],c[20];
    cout<<"Enter the array1:";
    cin>>n;
    cout<<"Enter the elements of array1:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the array2:";
    cin>>m;
    cout<<"Enter the elements of array2:";
    for(j=0;j<m;j++)
    {
        cin>>b[j];
    }
    i=0,j=0,k=0;
    while (i<=m && j<=n)
    {
        if (a[i]<=b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }

    for ( k = 0; k < (m+n); k++)
    {
        cout<<c[k]<<" ";
    }
    
 return 0;   
}