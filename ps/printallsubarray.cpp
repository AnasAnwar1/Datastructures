//for time comlexity = n^3
/*#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    int ans= INT_MIN;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
               //cout<<arr[k]<<" ";
               sum+=arr[k];
            }
        //cout<<endl;
        } 
    }

ans= max(sum, ans);
cout<<ans<<endl;
}*/
// for time compexity = n^2
/*
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int sum;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int curr[n+1];
    curr[0]=0;
    for(int i=1;i<=n;i++)
    {
        curr[i]=curr[i-1]+arr[i-1];
        sum=curr[i];
    }
    int ans= INT_MIN;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            sum=curr[i]-curr[j];
    ans= max(ans,sum);
        }
    }
    cout<<ans<<endl;
    return 0;
}*/
// KADANE's ALGORITHM
//for time complexity = n
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int currentSum=0;
    int ans= INT_MIN;
    for(int i=0;i<n;i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
        currentSum=0;
        }
    }
    ans = max(ans,currentSum);
    cout<<ans<<endl;
    return 0;
}