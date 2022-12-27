#include <iostream>
using namespace std;

int Meanof5(int* N){
    float mean=0;
    float median;
    for(int i=0;i<5;i++){
       cin >> N[i];
       mean += N[i];
       
    }
       median = (5+1)/2;
    cout<<"Mean:";
    cout<< mean/5 <<endl;
    cout<<"Median:"<< N[2] <<endl;
    
}
int main(){

    int N[5];
    cout<<"Enter 5 numbers:\n";
  
    Meanof5(N);
    
}