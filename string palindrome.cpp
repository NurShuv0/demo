#include<iostream>
#include<cstring>
#include<algorithm>
#define ll long long
#define sp " "
#define nl "\n"
using namespace std;
int main()
{
    string str;
    cin >> str;
    string rev = str;
    reverse(rev.begin(), rev.end());
    if(str == rev)
        cout << "YES\n";
    else
        cout << "NO\n";
}