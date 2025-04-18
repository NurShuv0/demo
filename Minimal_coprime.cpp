#include <iostream>
#include <vector>
#include <cmath>
#define sp " "
#define nl "\n"
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 1 && r == 1)
        {
            cout << 1 << nl;
        }
        else
        {
            cout << (r - l) << nl;
        }
    }
    return 0;
}
