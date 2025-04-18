#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<cmath>
#define ll long long
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define sort(v) sort(v.begin(),v.end(),greater<int>())
using namespace std;
int main()
{
    vector<int>v(3);
    ll t;
    cin >> t;
    while(t--)
    {
        for(int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }
        sort(v);
        if(v[0] == v[1] + v[2] )
        {
            cout << "YES" << nl;
        }
        else 
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}