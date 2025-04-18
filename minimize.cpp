#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        if(b - a > 1)
        {
            ll temp = a+1;
            ll c = (temp - a) + (b - temp);
            cout << c << nl;
        }
        else if(b - a == 1)
        {
            cout << "1" << nl;
        }
        else 
        {
            cout << "0" << nl;
        }
    }
}