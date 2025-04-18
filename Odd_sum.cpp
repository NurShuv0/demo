#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    speed;
    ll tt;
    cin >> tt;
    while(tt--)
    {
        bool flag = true;
        vector<ll>v;
        for(int i = 0; i < 3; i++)
        {
            ll input;
            cin >> input;
            v.pb(input);
        }
        if((v[0] % 2 == 0 && v[1] % 2 == 0 && v[2] % 2 == 0)
        || (v[0] % 2 != 0 && v[1] % 2 != 0 && v[2] % 2 != 0))
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
        }
    }
}