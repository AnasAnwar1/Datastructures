#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	cout << "Input number is " << num << endl;	// Writing output to STDOUT
    for(int i=0;i<num;i++){
        cout<<"*";
    }
	for(int i=1;i<num;i++){
		for(int j=0;j<=2*(num-i-1);j++){
            if (i == 0 || i == num - 1 || j == num - 1 - i)
            cout<<"*";
			
            else
            cout<<" ";
		}
			
        cout<<endl;
	}
    for(int i=0;i<num;i++){
        cout<<"*";
    }
}