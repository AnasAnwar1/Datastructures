#include<iostream>
using namespace std;
int main()
{
int n, i, j, k;
printf("Enter the number of rows: ");
cin>>n;
for(i = 1; i <= n; i++)
{
for(j = i; j <n; j++)
{
cout<<" ";
}
for(k = 1; k < (i*2); k++)
{
cout<<"*";
}
printf("\n");
}
for(i =2; i >= 1; i--)
{
for(j = n; j > i; j--)
{
cout<<" ";
}
for(k = 1; k < (i*2); k++)
{
cout<<"*";
}
printf("\n");
}
return 0;
}