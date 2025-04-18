#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k, sum = 0, ans = 0;
    cin >> n >> k;
    ll a[n + 1];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i <= n; i++)
    {
        ll now = sum;
        for (ll j = i + 1; j <= min(n, i + 31); j++)
        {
            now += (a[j] >> (j - i));
        }
        ans = max(ans, now);
        if (i != n)
        {
            sum += a[i + 1] - k;
        }
    }
    cout << ans << nl;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}