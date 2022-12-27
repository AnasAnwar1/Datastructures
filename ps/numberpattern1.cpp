#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for ( i = 1; i <=n ; i++)
    {
        for (j = 1; j <=n ; j++)
        {
            if (j<=i)
            {
                cout<<i;
            }
            else if (j>=n-i)
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}
/*#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>i;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <=i ; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/