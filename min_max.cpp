#include<iostream>
#include<vector>
#include<array>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<cstring>
#include<utility>
#include<set>
#include<map>
#include<stack>
#include<numeric>
#define ll long long
#define sp " "
#define nl "\n"
#define sort(v) sort(v.begin() , v.end())
#define pb push_back
#define sum(v) accumulate(v.begin(), v.end(), 0)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        vector<int>v;
        int a,b;
        cin >> a >> b;
        v.pb(a);
        v.pb(b);
        int mx = max(v[0],v[1]);
        int mn = min(v[0],v[1]);
        cout<< mn << sp << mx << nl;
    }


}