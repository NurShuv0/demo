#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<numeric>
#include<map>
#include<set>
#include<iomanip>
#include<queue>
#include<stack>
#define sp " "
#define nl "\n"
#define ll long long
#define pb push_back
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    ll tt;
    cin >> tt;
    while(tt--)
    {
        ll cost;
        cin >> cost;
        ll rem = cost % 10;
        if(rem < 5)
        {
            cost -= rem;
        }
        else{
            cost -= rem;
            cost += 10;
        }
        cout << 100 - cost << nl;
    }
}