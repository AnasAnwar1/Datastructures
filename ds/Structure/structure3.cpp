#include <iostream>
using namespace std;

 struct student
{
    string name;
    double rollno;
    int age;
    string address;

}x[16];

int main()
{
    // student x[16];
    for(int i=0;i<16;i++)
    {
        cout<<"Details of Student"<<i<<": "<<endl;
        cout<<"Enter student's name:\n"; 
        cin>>x[i].name;

        cout<<"Enter the rollno.: \n";
        cin>>x[i].rollno;

        cout<<"Enter the age: \n";
        cin>>x[i].age;

        cout<<"Enter the address:\n";
        cin>>x[i].address;
    }

    for(int i=0;i<16;i++){

        cout<<"Details of Student "<<i<<" are as follows :\n";
        cout<<"Student name: "<<x[i].name<<endl;
        cout<<"Student rollno: "<<x[i].rollno<<endl;
        cout<<"Student's address: "<<x[i].address<<endl<<endl;
    }

}