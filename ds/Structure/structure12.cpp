#include <iostream>
using namespace std;

struct employees{

    string name;
    long int salary;
    int workHours;
}x[10];

int main(){
        int c;
    for(int i=0;i<11;i++){

        cout<<"Enter the details of Employee"<<i<<" :\n";
        cout<<"Enter name: ";
        cin>>x[i].name;
        cout<<"Enter the salary: ";
        cin>>x[i].salary;
        cout<<"Enter the Working Hours: ";
        cin>>x[i].workHours;
    }

    for(int i=0;i<11;i++){

          if( x[i].workHours > 8){
            c= x[i].workHours - 8;
            x[i].salary = (x[i].salary + c*80);
            cout<<x[i].name<<endl;
            cout<<x[i].salary<<endl;
        }

        else{
            cout<<x[i].name<<endl;
            cout<<x[i].salary<<endl;
       }
    }

}