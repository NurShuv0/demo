#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    speed;
    ll tt;
    cin >> tt;
    while(tt--)
    {
        ll n, k, swt;
        cin >> n >> k;
        vector<ll>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(),v.rend());
        for(int i = 0; i < k; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(v[j] + i >= k)
                {
                    swt = j;
                }
                else 
                {
                    
                }
            }
        }
    }
}