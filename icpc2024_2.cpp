#include <iostream>
#define ll long long
#define sp " "
#define nl "\n"
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

using namespace std;
long long gcdd(ll a, ll b)
{
    while (b != 0)
    {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    speed;
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll s2 = a + b + c;
        ll s = s2 / 2;
        ll area = s2 * (s - a) * (s - b) * (s - c);

        ll swt = s2 * s2;
        ll gcd = gcdd(area, swt);
        area /= gcd;
        swt /= gcd;

        cout << area * 2 << "/" << swt << nl;
    }
    return 0;
}
