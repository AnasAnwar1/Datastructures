#include <iostream>
#include <math.h>
using namespace std;

int main (){

    int A,B;
    cout<<"Enter the value of A and B: ";
    cin>>A>>B;

    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    // cout<<"A to the power B: "<< pow(A,B);
    int p = pow(A,B);

    int c=0;
    while(p>0){

        int r=p%10;
        c++;

        if(k==r)
        cout<< r;

        p=p/10;
    }


}