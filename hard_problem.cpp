https://codeforces.com/contest/2044/problem/C
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string.h>
#define sp " "
#define nl "\n"
#define ll long long
#define INF 1e9 + 7
using namespace std;
void solve()
{

    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int a1 = min(m, a);
    int b1 = min(m, b);
    int c1 = min((2 * m - (a1 + b1)), c);
    cout << a1 + b1 + c1 << nl;
}
int main()
{                
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}