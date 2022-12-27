#include <iostream>
#include <math.h>
using namespace std;
int main(){

    int a,b,c;
    cin>>a>>b>>c;
    int x,y;
    float D;
    D = sqrt(((b*b)- (4*a*c)));

    if(D>0){
        cout<<"Roots are real and distinct"<<endl;
        x = (-(b) + D)/(2*a);
        y = (-(b) - D)/(2*a);
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }

    else if(D<0){
        cout<<"Roots are unreal and imaginary"<<endl;
        x = (-(b) + D)/(2*a);
        y = (-(b) - D)/(2*a);
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;        
    }

    else{
        cout<<"Roots are real and equal"<<endl;
        x = (-(b) + D)/(2*a);
        y = (-(b) - D)/(2*a);
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;  
    }
    return 0;
}