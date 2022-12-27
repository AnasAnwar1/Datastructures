#include <iostream>
using namespace std;

 struct student
{
    char name[100];
    double rollno;
    int m1,m2,m3,m4,m5,m6;

};

int main()
{
    student x;
    cout<<"Person details:"<<endl;
    cout<<"Enter person's name:\n"; 
    cin.getline(x.name,100);

    cout<<"Enter the rollno.: \n";
    cin>>x.rollno;

    cout<<"Enter the marks in maths:\n";
    cin>>x.m1;
    cout<<"Enter the marks in physics:\n";
    cin>>x.m2;
    cout<<"Enter the marks in chemistry:\n";
    cin>>x.m3;
    cout<<"Enter the marks in english:\n";
    cin>>x.m4;
    cout<<"Enter the marks in computer:\n";
    cin>>x.m5;
    cout<<"Enter the marks in physical education:\n";
    cin>>x.m6;

    cout<<"Student details are as follows :\n";
    cout<<"Student name: "<<x.name<<endl;
    cout<<"Student rollno: "<<x.rollno<<endl;
    cout<<"Student marks in maths: "<<x.m1<<endl;
    cout<<"Student marks in physics: "<<x.m2<<endl;
    cout<<"Student marks in chemistry: "<<x.m3<<endl;
    cout<<"Student marks in english: "<<x.m4<<endl;
    cout<<"Student marks in computer: "<<x.m5<<endl;
    cout<<"Student marks in physical educaton: "<<x.m6<<endl;

    int Total;
    Total= x.m1+x.m2+x.m3+x.m4;
    cout<<"Total in best four: "<<Total<<endl;

    float percent;
    percent= Total/4;
    cout<<"Percentage: "<<percent<<endl;
    if(percent>95)
    cout<<"Eligible\n";

    else
    cout<<"Not Eligible\n";

}