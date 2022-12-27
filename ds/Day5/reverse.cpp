#include <iostream>
using namespace std;


int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=1;i<=n;i++){

        cin>>arr[i];
    }
    cout<<"Reverse array: ";
    for(int i=n;i>0;i--){

        cout<<arr[i]<<" ";
    }
    
}