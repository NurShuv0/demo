#include<bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp " "
#define nl "\n"
#define ll long long
using namespace std;
int main()
{
    speed;
    int t, swt = 0;
    cin >> t;
    while(t--)
    {
        swt++;
        ll n,k,result, total = 0;
        cin >> n >> k;
        while(n--)
        {
            ll dry,water;
            cin >> dry >> water;
            result = k / dry;
            total += result;
        }
        cout << "Case "<< swt << ":"<<sp<< total << nl;
    }
}