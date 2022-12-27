#include <iostream>
using namespace std;
void swap(int *a, int*b)
{
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=20;
    int b=40;
    int *apr=&a;
    int *bpr= &b;
    swap(*apr,*bpr);
    cout<<a<<" "<<b;
}