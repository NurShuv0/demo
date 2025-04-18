#include <iostream>
#define ll long long
#define nl "\n"
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int main()
{
    speed;
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a >= b)
        {
            cout << a << nl;
        }
        else
        {
            ll max_i = b - a;
            if (2 * a < b )
            {
                cout << "0" << nl;
            }
            else
            {
                cout << a - max_i << nl;
            }
        }
    }
    return 0;
}