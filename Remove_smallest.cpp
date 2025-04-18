#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<cmath>
#define ll long long
#define sp " "
#define nl "\n"
#define pb push_back
#define sort(v) sort(v.begin(), v.end())
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll>v;
        for(int i = 0; i < n;i++)
        {
            int nr;
            cin >> nr;
            v.pb(nr);
        }
        bool flag = true;
        sort(v);
        for(int i = 0; i < n - 1; i++)
        {
            if((v[i + 1] - v[i] > 1))
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        {
            cout << "YES"<< nl;
        }
        else{
            cout << "NO" <<nl;
        }
    }
}