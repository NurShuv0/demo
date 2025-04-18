#include<iostream>
#include<algorithm>
#include<cmath>
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define nl "\n"
#define sp ' '
#define ll long long
using namespace std;
int main()
{
    speed
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll result = n / 2;
        cout << result << nl;
    }
}