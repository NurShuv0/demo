#include<iostream>
#include<vector>
#include<array>
#include<cmath>
#include<algorithm>
#include<iomanip>
#define ll long long
#define sp " "
#define nl "\n"
#define sort(v) sort(v.begin() , v.end(), greater<ll>())
#define pb push_back
#define smooth ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    smooth;
    vector<ll>v;
    for(int i = 0; i < 3; i++)
    {
        ll swt;
        cin >> swt;
        v.pb(swt);
    }
    sort(v);
    ll middle = v.size() / 2;
    ll result = (v[0] - middle ) + (middle - v[2]);
    cout << result << nl;
}