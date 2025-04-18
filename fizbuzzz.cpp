#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define sp " "
#define nl "\n"
#define ll long long
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = (n / 15) * 3;
        int rem = n % 15;
        if (rem >= 1)
            ans++;
        if (rem >= 2)
            ans++;
        cout << ans + 1 << nl;
    }
}