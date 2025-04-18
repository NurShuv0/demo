#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstring>
#define ll long long 
#define nl "\n"
#define sp " "
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    ll t;
    vector<ll>v(3);
    cin >> t;
    while(t--)
    {
        for(int i = 0;i < 3;  i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end(), greater<ll>());
        if(v[0] + v[1] >= 10)
        {
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}