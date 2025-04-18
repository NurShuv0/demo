#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define ll long long
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed;
    int t;
    cin >> t;
    while(t--)
    {
        int n,count = 1;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for(int i = 0; i < n - 1; i++)
        {
            if(abs(v[i+1] - v[i]) == 5 || abs(v[i+1] - v[i]) == 7)
            {
                count++;
            }
        }
        if(count == n)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}