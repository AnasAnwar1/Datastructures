#include <bits/stdc++.h>
using namespace std;
int main(){

    int n ;
    cout<<"Enter the size of matrix:";
    cin>>n;

    int a[n][n];
    int temp[n][n];
    int d[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[i][j]=a[j][i];
            // cout<<temp[i][j]<<" ";
        }
    }

    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            d[i][j]=temp[i][n-j-1];
            cout<<d[i][j]<<" ";
        }
    }
}