#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#define ll long long
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,sum = 0,sum2 = 0,rem,rem2;
        cin >> n;
        ll last = n % 1000;
        for(int i = 0; i < 6; i++)
        {
            rem = n % 10;
            sum += rem;
            n /= 10;
        }
        for(int i = 0; i < 3; i++)
        {
            rem2 = last % 10;
            sum2 += rem2;
            last /= 10;
        }
        if(sum - sum2 == sum2)
        {
            cout << "YES" << nl;
        }
        else  
        {
            cout << "NO" << nl;
        }
    }
}