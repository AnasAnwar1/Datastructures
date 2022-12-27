#include <iostream>
using namespace std;

struct Date{

    int day;
    string month;
    int year;
}d1,d2;

int main(){

    cout<<"Enter the First date:"<<endl;
    cout<<"Enter the day: ";
    cin>>d1.day;
    cout<<"Enter the month: ";
    cin>>d1.month;
    cout<<"Enter the year: ";
    cin>>d1.year;

    cout<<"\nEnter the Second date"<<endl;
    cout<<"Enter the day: ";
    cin>>d2.day;
    cout<<"Enter the month: ";
    cin>>d2.month;
    cout<<"Enter the year: ";
    cin>>d2.year;

    cout<<"Date 1: "<<d1.day<<"-"<<d1.month<<"-"<<d1.year<<endl;
    cout<<"Date 2: "<<d2.day<<"-"<<d2.month<<"-"<<d2.year<<endl;

  if(d1.year==d2.year && d1.month==d2.month && d1.day==d2.day)
    cout<<"Dates are same";

    else
    cout<<"Dates are not same";
}