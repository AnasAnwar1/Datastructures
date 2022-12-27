/*#include <iostream>
#include <math.h>
using namespace std;
int max_and_min(int sum1, int sum2, int sum3, int sum4, int sum5)
{
    int max1= max(sum1,sum2);
    int max2= max(max1,sum3);
    int max3= max(max2,sum4);
    int max4= max(max3,sum5);
    int min1= min(sum1,sum2);
    int min2= min(min1,sum3);
    int min3= min(min2,sum4);
    int min4= min(min3,sum5);
    cout<<max4<<" "<<min4;

}
int main()
{
 long long int a[10],n,i,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
 cin>>n;
 for(i=0;i<n;i++)
 {
    scanf("%lld",&a[i]);
 }
i=1;
while (i<n)
{
  sum1=sum1+a[i];
  i++;
}
i=0;
while  (i<n && i!=1)
{
    sum2=sum2+a[i];
    i++;
}
i=0;
while (i<n && i!=2)
{
    sum3=sum3+a[i];
    i++;
}
i=0;
while (i<n && i!=3)
{
    sum4=sum4+a[i];
    i++;
}
i=0;
while (i<n && i!=4)
{
    sum3=sum3+a[i];
    i++;
}
int ans= max_and_min(sum1,sum2,sum3,sum4,sum5);
return 0;
}*/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> ans={1};
    vector<int> sum={0};
    for(int i=0;i<3;i++)
    {
        if (a[i]>b[i])
        {
         return ans;
            
        }
        
        else if (b[i]>a[i])
        {
        return ans;
            
        }
        else 
        return sum;
}}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(3);

    for (int i = 0; i < 3; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    string b_temp_temp;
    getline(cin, b_temp_temp);

    vector<string> b_temp = split(rtrim(b_temp_temp));

    vector<int> b(3);

    for (int i = 0; i < 3; i++) {
        int b_item = stoi(b_temp[i]);

        b[i] = b_item;
    }

    vector<int> result = compareTriplets(a, b);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
