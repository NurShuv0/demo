#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<numeric>
#define ll long long
#define pb push_back
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define swt sweet
#define sort(v) sort(v.begin(), v.end());
using namespace std;
int main()
{
    speed;
    vector<ll>v(4),swt;
    for(int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }
    sort(v);
    for(int i = 0; i < 3; i++)
    {
        swt.pb(v[3] - v[i]);
    }
    for(auto result: swt)
    {
        cout<< result<< sp;
    }
    cout << nl;
}