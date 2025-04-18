#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<numeric>
#define ll long long 
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
using namespace std;
int main()
{
    speed;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, cnt = 1, count = 1;
        cin >> n;
        vector<ll>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        //bool flag = true;
        for(int i = 0; i < n - 1; i++)
        {
            if(v[i] != v[i+1])
            {
                break;
            }
            else 
            {
                count++;
            }
        }
        for(int i = n -1; i >= 1; i--)
        {
            if(v[i] != v[i - 1])
            {
                break;
            }
            else 
            {
                cnt++;
            }
        }
        ll result = cnt * count * 2;
        if(count != n)
            cout << result << nl;
        else
        {
            cout << n * (n-1) << nl;
        }
    }
}