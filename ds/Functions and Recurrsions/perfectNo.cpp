#include <iostream>
using namespace std;

int perfectNo(int N){
    int sum=0;
    for(int i=1;i<=N/2;i++){

        if(N%i==0){
         cout<<i<<" ";
        sum += i;
        }
    }
     cout<<"\n"<<sum<<endl;
    if(sum==N)
    cout<<"\nPerfectNo.\n";

    else
    cout<<"\nNotPerfectNo\n";
}
int main(){
    int N;
    cout<<"Enter the number:\n";
    cin>>N;
    perfectNo(N);
}