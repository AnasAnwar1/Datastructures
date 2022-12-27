#include <iostream>
using namespace std;

bool Palindrome(string str, int i){

if(i > str.size()/2){
return true ;
}

return str[i] == str[str.size()-i-1] && Palindrome(str, i+1) ;

}


int main()
{
string str;
cin>>str;
if (Palindrome(str, 0))
cout << "Yes";
else
cout << "No";

return 0;
}