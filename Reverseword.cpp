#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<numeric>
#define ll long long
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define nl "\n"
#define sp " "
using namespace std;
int main()
{
    speed;
    string str;
    getline(cin,str);
    vector<char>v;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] != ' ')
        {
            v.pb(str[i]);
        }
        else{
            reverse(v.begin(), v.end());
            for(const auto &word: v)
            {
                cout <<word;
            }
            cout << sp;
            v.clear();
        }
    }
    if(!v.empty())
    {
        reverse(v.begin(), v.end());
        for(const auto &last: v)
        {
            cout << last;
        }
        cout << nl;
    }
}