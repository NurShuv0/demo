#include <iostream>
#include <vector>
#include <cmath>
#define sp " "
#define nl "\n"
#define ll long long
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0, digit;
        cin >> n;
        while (n != 0)
        {
            digit = n % 10;
            sum += digit;
            n /= 10;
        }
        cout << sum << nl;
    }
}