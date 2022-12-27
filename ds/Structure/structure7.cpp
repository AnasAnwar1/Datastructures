#include <iostream>
using namespace std;

 struct student
{
    string name;
    double rollno;
    int m1,m2,m3;

}x[6];

int main()
{
   for(int i=0;i<6;i++){
    cout<<"Details of student "<<i<<" :"<<endl;
    cout<<"Enter student's name:\n"; 
    cin>>x[i].name;

    cout<<"Enter the rollno.: \n";
    cin>>x[i].rollno;

    cout<<"Enter the marks in maths:\n";
    cin>>x[i].m1;
    cout<<"Enter the marks in physics:\n";
    cin>>x[i].m2;
    cout<<"Enter the marks in chemistry:\n";
    cin>>x[i].m3;

   }

   for(int i=0;i<6;i++){
    cout<<"Details of student"<<i<<" are as follows:\n";
    cout<<"Student name: "<<x[i].name<<endl;
    cout<<"Student rollno: "<<x[i].rollno<<endl;
    cout<<"Student marks in maths: "<<x[i].m1<<endl;
    cout<<"Student marks in physics: "<<x[i].m2<<endl;
    cout<<"Student marks in chemistry: "<<x[i].m3<<endl;

    cout<<"Percentage: "<< (x[i].m1 + x[i].m2 + x[i].m3)/3<<endl;
   }

}