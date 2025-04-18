#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    map<char,int>mp;
    for(const auto &c: str)
    {
        mp[c]++;
    }
    for(const auto &c: mp)
    {
        cout << c.first <<" : " << c.second<<nl;
    }
}