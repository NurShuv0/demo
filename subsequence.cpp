#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<iomanip>
#define ll long long
#define sp " "
#define nl "\n"
using namespace std;
int main()
{
    string str;
    cin >> str;
    set<char>st;
    for(const auto &c: str)
    {
        st.insert(c);
    }
    string hello = "ehllo"
    if(st.find(hello) != string::npos)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
}