#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed int tt;
    cin >> tt;
    while (tt--)
    {
        ll n, k, count = 0;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int left = 0, right = n - 1;
        while (left < right)
        {
            if (v[left] + v[right] == k)
            {
                count++;
                left++;
                right--;
            }
            else if (v[left] + v[right] < k)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        cout << count << nl;
    }
}