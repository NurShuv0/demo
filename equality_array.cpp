#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define sp " "
#define nl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        bool flag = true;
        vector<int>v(n);
        for(int i  = 0; i < n-2; i++)
        {
            cin >> v[i];
        }
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] == 1 && v[i + 1] == 0 && v[i + 2] == 1)
            {
                flag = false;
                break;
            }
        }
        if(!flag)
        {
            cout << "NO" << nl;
        }
        else 
        {
            cout << "YES" << nl;
        }
    }
}