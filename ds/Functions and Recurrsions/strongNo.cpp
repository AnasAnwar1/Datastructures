#include <iostream>
using namespace std;

int fact(int r)
{
     int fact=1; 
    for(int i=1;i<=r;i++)
    {
       fact=fact*i;
    }
    return fact;

}

int main()
{
    int n;
    int sum=0;
    cout<<"Enter a number\n";
    cin>>n;
    int k=n;
    int r;
    while(k!=0)
    {
        r=k%10;
        int f=fact(r);
        k=k/10;
    sum=sum+f;
    cout<<sum<<endl;
    }
    if(sum==n)
    {
        cout<<"\nNumber is a strong";
    }
    else
    {
    cout<<"\nNumber is not a strong";
    }
    return 0;
}