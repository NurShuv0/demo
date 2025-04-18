#include <iostream>
#include <cstring>
#include <iomanip>
#include <vector>
#define sp " "
#define nl "\n"
#define pb push_back
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, str;
        cin >> s >> str;
        vector<char> v;
        ll min_size = min(s.size(), str.size());
        int i = 0;
        for (int i = 0; i < min_size; i++)
        {
            v.pb(s[i]);
            v.pb(str[i]);
        }
        if (s.size() > str.size())
        {
            for (int i = min_size; i < str.size(); i++)
            {
                v.push_back(s[i]);
            }
        }
        else
        {
            for (int i = min_size; i < str.size(); i++)
            {
                v.push_back(str[i]);
            }
        }
        for (auto &c : v)
        {
            cout << c;
        }
        cout << nl;
    }
}