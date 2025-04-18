#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<numeric>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp " "
#define nl "\n"
using namespace std;
int main()
{
    speed;
    int y,w;
    cin >> y >> w;
    int max_value = max(y,w);
    int remaining = 6 - max_value + 1;
    int divisor = std::gcd(remaining,6);
    remaining /= divisor;
    int dice = 6 / divisor;
    cout<<remaining <<"/" << dice <<nl;
}