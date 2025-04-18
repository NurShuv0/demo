#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<cmath>
#define ll long long
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define nl "\n"
#define sp " "
using namespace std;
int main()
{
    speed;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,w,h;
        cin >> n;
        vector<ll>vw,vh;
        while(n--)
        {
            cin >> w >> h;
            vw.pb(w);
            vh.pb(h);
        }
        ll maxW = *max_element(vw.begin(), vw.end());
        ll maxH = *max_element(vh.begin(), vh.end());
        ll peri = 2 * (maxW + maxH);
        cout << peri <<nl;
    }
}
