#include <iostream>
using namespace std;

struct  student
{
    string name;
    int rollno;
    int age;
    string address;
};

int Details(struct student *x){

    cout<<x->name<<endl;
    cout<<x->age<<endl;
    cout<<x->address<<endl;
}

int Roll(struct student *x){

    for(int i=0;i<11;i++){

        if((x[i].rollno)%2==0)
        cout<<x[i].name<<endl;
    }
}

int Age(struct student *x){

    for(int i=0;i<11;i++){

        if(x[i].age==14)
        cout<<x[i].name<<endl;
    }
}

int main(){
        struct student * x = new struct student[11];
        
    for(int i=0;i<11;i++){

        cout<<"Enter the details of student "<<i<<" :\n";
        cout<<"Enter the name: ";
        cin>>x[i].name;
        cout<<"Enter the rollno.: ";
        cin>>x[i].rollno;
        cout<<"Enter the age: ";
        cin>>x[i].age;
        cout<<"Enter the address: ";
        cin>>x[i].address;
    }
    cout<<Age(x);

    cout<<Roll(x);

    
    cout<<"Enter the rollno: ";
    cin>>x->rollno;

    cout<<Details(x);
}