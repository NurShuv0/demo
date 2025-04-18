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
    ll tt;
    cin >> tt;
    while(tt--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if(a < b && b < c)
        {
            cout << "STAIR" << nl;
        }
        else if(a < b && b > c)
        {
            cout << "PEAK" << nl;
        }
        else 
        {
            cout << "NONE" << nl;
        }
    }
}