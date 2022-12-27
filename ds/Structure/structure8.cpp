#include <iostream>
#include <math.h>
using namespace std;

struct complex{

    int real;
    int imag;
}n1,n2,add,sub,mul;

int main(){

    cout<<"Enter the first number real part: \n";
    cin>>n1.real;
    cout<<"Enter the first number imaginary part: \n";
    cin>>n1.imag;

    cout<<"Enter the second number real part: \n";
    cin>>n2.real;
    cout<<"Enter the second number imaginary part: \n";
    cin>>n2.imag;

    add.real= n1.real+n2.real;
    add.imag= n1.imag+n2.imag;

    sub.real=n1.real-n2.real;
    sub.imag=n1.imag-n2.imag;

    mul.real=(n1.real*n2.real) + (-(n1.imag*n2.imag)) ;
    mul.imag=(n1.real*n2.imag) + (n1.imag*n2.real);

    cout<<"Sum of the two complex number is: "<<add.real<<" + "<<add.imag<<"i"<<endl;
    cout<<"Subtraction of the two complex number is: "<<sub.real<<" + "<<sub.imag<<"i"<<endl;
    cout<<"Multiplication of two complex number is:"<<mul.real<<" + "<<mul.imag<<"i"<<endl;
}