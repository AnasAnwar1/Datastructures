#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int n;
    cin>>n;
    while(n>9){

     while(n){
        int temp;
        temp=n%10;
        sum+=temp;
        n=n/10;
      }
    
        cout<<sum;
        n=sum;  
    }
    
}