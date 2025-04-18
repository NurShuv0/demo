#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<cmath>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k,sum = 0;
        cin >> n >> k;
        vector<ll>brand(k), cost(k);
        for(int i = 0; i < k; i++)
        {
            cin >> brand[i] >> cost[i];
        }
        sort(cost.begin(), cost.end(),greater<ll>());

        for(int i = 0; i < min(n,k); i++)
        {
            sum += cost[i];
        }
        cout << sum << nl;
    }
}