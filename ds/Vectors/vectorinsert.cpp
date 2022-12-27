#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
}
int main()
{
    vector<int> arr;
    int size,ele;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the elements of the array: ";
        cin>>ele;
        arr.push_back(ele);
    }
    display(arr);
    vector<int> :: iterator ins = arr.begin();
   arr.insert(ins,4,10);
    display(arr);
}