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
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll>v;
        for(int i = 1; i < n; i++)
        {
            ll temp = 0;
            for(int j = 1; j <= i; j++)
            {
                temp += j;
            }
            ll nr = sqrt(temp);
            if(temp != (nr * nr))
            {
                v.push_back(i);
            }
        }
        if(n == 1)
        {
            cout << -1 << nl;
        }
        for(int i = 0; i < n; i++)
        {
            cout << v[i] << sp;
        }
    }
}