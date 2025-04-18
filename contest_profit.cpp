#include<iostream>
#include<vector>
#include<cmath>
#include<cstring>
#include<numeric>
#include<set>
#include<algorithm>
#include<iomanip>
#define ll long long 
#define nl "\n"
#define sp " "
#define pb push_back
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    speed;
    ll t;
    cin >> t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        ll lv = b;
        if(a >= b)
        {
            cout << a << nl;
        }
        else
        {
            bool flag = true;
            for(int i = 1; i <= a; i++)
            {
                
                ll s = 2 * i;
                lv = b - (2 * i);
                ll temp = a - i;
                if(lv <= temp)
                {
                    cout << temp << nl;
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                cout << "0" << nl;
            }
        }
    }
    return 0;
}
