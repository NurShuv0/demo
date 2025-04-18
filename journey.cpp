//https://codeforces.com/contest/2051/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<string.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define sp " "
#define nl "\n"
#define ll long long
#define INF 1e9 + 7
using namespace std;
void solve()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int day = n / (a + b + c);
    int extra = n % (a + b + c);
    if(extra == 0)
    {
        cout << day * 3 << nl;
    }
    else if(extra <= a)
    {
        cout << (day * 3) + 1 << nl;
    }
    else if(extra <= a + b)
    {
        cout <<  (day * 3) + 2 << nl;
    }
    else
    {
        cout << (day * 3) + 3 << nl;
    }
}
int main()
{
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}