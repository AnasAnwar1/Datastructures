#include <iostream>
using namespace std;

int swapAlt(int arr[], int n){

   int temp;
    int i=1;
    while(i<n){
        temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
        i=i+2;
      } 
      for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";
      }
   

}
int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }

    swapAlt(arr,n);
}