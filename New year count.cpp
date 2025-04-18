#include<iostream>
#include<array>
#include<cmath>
#define ll long long
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int hr,mn;
        cin >> hr >> mn;
        ll min_day = 1440; 
        ll total_min = hr * 60 + mn;
        cout << min_day - total_min << nl;
    }
}