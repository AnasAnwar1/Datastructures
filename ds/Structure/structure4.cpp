#include <iostream>
using namespace std;

struct distance{

    int feet;
    float inch;
}d1,d2,result;

int main(){

    cout<<"Enter the first feet: ";
    cin>>d1.feet;

    cout<<"Enter the first inch: ";
    cin>>d1.inch;

    cout<<"Enter the second feet: ";
    cin>>d2.feet;

    cout<<"Enter the second inch: ";
    cin>>d2.inch;

    result.feet=d1.feet+d2.feet;
    result.inch=d1.inch+d2.inch;

    cout<<"Sum of the distance: "<<result.feet<<"' - "<<result.inch<<"\""<<endl;
}