#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
#define sp " "
#define nl "\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int max_diff = 0;
        for (int i = 0; i < n; i++)
        {
            int m = 0, s = 0;
            for (int j = 0; j < n; j++)
            {
                if (j == i)
                {
                    m += a[j];
                }
                if (j == i + 1)
                {
                    s += b[j];
                }
            }
            max_diff = max(max_diff, m - s);
        }
        cout << max_diff << nl;
    }
}
