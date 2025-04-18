#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
#define int long long 
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int_fast32_t main()
{
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >>  a >> b >> c;
        if(a + b == c)
        {
            cout << "+" << nl;
        }
        else 
        {
            cout << "-" << nl;
        }
    }
}