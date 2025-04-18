#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#define sp " "
#define nl "\n"
#define speed ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int main()
{
    speed
    int t;
    cin >> t;
    while(t--)
    {
        int  n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mx = *max_element(v.begin(),v.end());
        int mn = *min_element(v.begin(), v.end());
        int swt = mx - mn;
        cout << swt << nl;
    }
}