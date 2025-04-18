#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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
    while (t--)
    {
        ll n, count = 0;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != i % 2)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (v[j] % 2 != j % 2 && v[j] % 2 == i % 2)
                    {
                        swap(v[i], v[j]);
                        count++;
                        break;
                    }
                }
            }
        }
        if (n == 1)
        {
            cout << "-1" << nl;
        }
        else
        {
            cout << count << nl;
        }
    }
}