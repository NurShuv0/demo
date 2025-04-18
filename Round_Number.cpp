#include <iostream>
#include <vector>
#include <cmath>
#include <array>
#include <iomanip>
#define ll long long
#define nl "\n"
#define sp " "
#define pb push_back
#define smooth ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    smooth;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, digit = 1, rem = 0, count = 0;
        cin >> n;
        vector<ll> v;
        while (n != 0)
        {
            if (n % 10 != 0)
            {
                count++;
                rem = (n % 10) * digit;
                v.pb(rem);
                n /= 10;
                digit *= 10;
            }
            else
            {
                n /= 10;
                digit *= 10;
            }
        }
        cout << count << nl;
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << sp;
        }
        cout << nl;
    }
}