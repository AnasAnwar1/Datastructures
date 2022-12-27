#include <iostream>
using namespace std;
 
struct customers{

    string name;
    long int accountNo;
    long int balance;
};

int customerBalance(struct student *x){

    for(int i=0;i<2;i++){
        if(x[i].balance < 200)
        cout<<x[i].name<<endl;
    }
}

int main(){

    struct customers *x = new struct customers[11];
    for(int i=0;i<2;i++){

        cout<<"Enter the details of customer"<<i<<" :"<<endl;
        cout<<"Enter the name: ";
        cin>>x[i].name;
        cout<<"Enter the accountNo.: ";
        cin>>x[i].accountNo;
        cout<<"Enter the bank balance: ";
        cin>>x[i].balance;
    }

    customerBalance(x);
}