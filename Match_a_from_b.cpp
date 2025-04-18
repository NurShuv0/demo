#include<iostream>
#include<cmath>
#include<algorithm>
#define nl "\n"
#define sp " "
#define ll long long
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    ll t;
    cin >> t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        if(a  == b)
        {
            cout << a - b <<nl;
        }
        else{
            ll rem = abs(a - b);
            ll result = ceil(rem/10.0);
            cout << result << nl;
        }
    }
}