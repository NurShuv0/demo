#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<iomanip>
#include<numeric>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed
    int n, x, y;
    string s;
    cin >> n >> x >> y >> s;
    int ans = 0;
    for (int i = n - x; i < n; ++i)
    {
        if (i == n - y - 1)
            ans += s[i] == '0';
        else
            ans += s[i] == '1';
    }
    cout << ans << nl;
}