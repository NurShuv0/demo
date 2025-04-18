#include<iostream>
#include<cmath>
#include<algorithm>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;
int main()
{
    ll n, value, count = 0;
    cin >> n >> value;
    if(n >= value)
        count++;
    for(int i = 2; i <= n ; i++)
    {
        if(value % i == 0 && value / i <= n)
            count++;
    }
    cout << count << nl;
}