#include <iostream>
using namespace std;
int main()
{
    int savings=5000;
    for (int date = 0; date <=30 ; date++)
    {
        if (date%2==0)
        {
            cout<<"Drive the car"<<endl;
        }
        else
        {   
            cout<<"Ride the bike"<<endl;
        }
     }
    
}