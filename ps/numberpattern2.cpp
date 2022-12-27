#include <iostream> 
using namespace std;
int main()
{
    int n,i,j,c=0;
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (j<=i)
            {
                c=c+1;
                cout<<c<<" ";
            }
            else if (j>i)
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}