#include <iostream>
using namespace std;

long long int raise(int base,int power){

    if (power==0)
    return 1;

    else
    return base*raise(base,power-1);
}
int main(){

    int base;
    cout<<"Enter the base:\n";
    cin>>base;

    int power;
    cout<<"Enter the power:\n";
    cin>>power;

    cout<<"the value of base "<<base<<" "<<"raised to power "<<power<<" "<<"is: "<<raise(base,power);
}