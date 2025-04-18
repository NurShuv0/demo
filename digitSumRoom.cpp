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
    while(t--)
    {
        ll n;
        cin >> n;
        int digit = n % 10;
        int swt = (digit - 1)* 10;
        int num = digit;
        int nr = 0;
        while(num <= n)
        {
            //nr++;
            swt += ++nr;
            num *= 10;
        }
        cout << swt << nl;
    }
}