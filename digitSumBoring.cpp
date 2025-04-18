#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
#define sp " "
#define nl "\n"
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n, cnt = 0, sum = 0;
        cin >> n;
        while (n != 0)
        {
            n /= 10;
            cnt++;
        }
        for (int i = n; i != 0; i--)
        {
            bool flag = false;
            for (int j = 0; j < cnt; j++)
            {
                ll m = n / 10;
                if(n % 10 == m % 10)
                {
                    n /= 10;
                    flag = true;
                }
                else 
                {
                    flag = false;
                    break;
                }
                //cout << n << sp;
            }
            if(flag)
            {
                int digit = i % 10;
                sum += digit;
                if(i <= n % 10)
                {
                    sum += i;
                }
            }
        }
        cout << sum << nl;
    }
}