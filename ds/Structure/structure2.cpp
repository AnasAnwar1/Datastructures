#include <iostream>
using namespace std;

 struct student
{
    string name;
    double rollno;
    int age;
    int m1,m2,m3,m4,m5,m6;

};

int main()
{
    student x[6];
    for(int i=0;i<6;i++)
    {
        cout<<"Details of Student"<<i<<": "<<endl;
        cout<<"Enter student's name:\n"; 
        cin>>x[i].name;

        cout<<"Enter the rollno.: \n";
        cin>>x[i].rollno;

        cout<<"Enter the age: \n";
        cin>>x[i].age;

        cout<<"Enter the marks in maths:\n";
        cin>>x[i].m1;
        cout<<"Enter the marks in physics:\n";
        cin>>x[i].m2;
        cout<<"Enter the marks in chemistry:\n";
        cin>>x[i].m3;
        cout<<"Enter the marks in english:\n";
        cin>>x[i].m4;
        cout<<"Enter the marks in computer:\n";
        cin>>x[i].m5;
        cout<<"Enter the marks in physical education:\n";
        cin>>x[i].m6;
    }

    for(int i=0;i<6;i++){

        cout<<"Details of Student "<<i<<" are as follows :\n";
        cout<<"Student name: "<<x[i].name<<endl;
        cout<<"Student rollno: "<<x[i].rollno<<endl;
        cout<<"Student marks in maths: "<<x[i].m1<<endl;
        cout<<"Student marks in physics: "<<x[i].m2<<endl;
        cout<<"Student marks in chemistry: "<<x[i].m3<<endl;
        cout<<"Student marks in english: "<<x[i].m4<<endl;
        cout<<"Student marks in computer: "<<x[i].m5<<endl;
        cout<<"Student marks in physical educaton: "<<x[i].m6<<endl;
    }

}