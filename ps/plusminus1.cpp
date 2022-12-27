#include <iostream>
using namespace std;
int main()
{
    float n;
    float c=0;
float pos;
float neg;
float zero;
float c1=0;
float c2=0;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
for(int i =0 ; i < n ; i++){
    if (arr[i]>0) {
       c++;
    }
    else if (arr[i]<0) {
    c1++;
    }
    else  {
    c2++;
    }
}
pos=(c/n);
neg=(c1/n);
zero=(c2/n);
cout<<pos<<endl;
cout<<neg<<endl;
cout<<zero;
    return 0;
}