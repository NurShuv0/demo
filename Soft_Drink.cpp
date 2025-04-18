#include<iostream>
#include<array>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<set>
#include<map>
#include<numeric>
#define ll long long
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define TV toast_vol
#define TS toast_salt
#define TSL total_slice
using namespace std;
int main()
{
    speed;
    ll n, bottle, volume, lime, slice, salt, vol_need, salt_need ;
    cin >> n >> bottle >> volume >> lime >> slice >> salt >> vol_need >> salt_need;
    ll total_vol = (bottle * volume);
    ll total_slice = (lime * slice);
    ll toast_vol = (total_vol / vol_need);
    ll toast_salt = (salt / salt_need);
    int result = min({TV, TS, TSL})/ n;
    cout << result << nl;

}