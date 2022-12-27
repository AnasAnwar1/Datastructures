#include <iostream>
using namespace std;

struct time{

    int hour;
    int min;
    int second;
}t1,t2,add;

int main(){

    cout<<"Enter the time for first clock: \n";
    cout<<"Enter the hour: ";
    cin>>t1.hour;
    cout<<"Enter the minutes: ";
    cin>>t1.min;
    cout<<"Enter the seconds: ";
    cin>>t1.second;

    cout<<"Enter the time for second clock: \n";
    cout<<"Enter the hour: ";
    cin>>t2.hour;
    cout<<"Enter the minutes: ";
    cin>>t2.min;
    cout<<"Enter the seconds: ";
    cin>>t2.second;

    add.hour=t1.hour+t2.hour;
    add.min=t1.min+t2.min;
    add.second=t1.second+t2.second;

    if(add.second>60){
        add.min+=1;
        add.second-=60;
    }

    if(add.min>60){
        add.hour+=1;
        add.min-=60;
    }

    cout<<"Total Time: "<<add.hour<<"' "<<add.min<<"\" "<<add.second<<"\"\" ";
}