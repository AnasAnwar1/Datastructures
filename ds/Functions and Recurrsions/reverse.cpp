#include <iostream>
using namespace std;

void reverse(int n){

    if(n==0 )
    return;
    int t;
    t=n%10;
    cout<<t;
    
     reverse(n/10);
}
int main(){

    int n;
    cin>>n;
    reverse(n);
}